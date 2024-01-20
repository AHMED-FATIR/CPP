/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:14:21 by afatir            #+#    #+#             */
/*   Updated: 2024/01/17 15:03:53 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &src){
	*this = src;
}
BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src){
	if (this != &src){
		this->data = src.data;
	}
	return *this;
}

void BitcoinExchange::FillMap(std::string csvFile)
{
	std::ifstream file(csvFile);
	std::string line, date, price;
	if (!file.is_open())
		throw std::runtime_error("data File not found");
	if (!std::getline(file, line))
		throw std::runtime_error("data File is empty");
	while (std::getline(file, line)){
		std::stringstream ss(line);
		std::getline(ss, date, ',');
		std::getline(ss, price, '\0');
		this->data[date] = std::strtod(price.c_str(), NULL);
	}
	file.close();
}

int	BitcoinExchange::ParsingDate(std::string &date)
{
	std::string year, month, day;
	std::stringstream ss(date);
	std::getline(ss, year, '-');
	std::getline(ss, month, '-');
	std::getline(ss, day, '\0');
	if (day.length() != 3 || day[2] != ' ')
			{std::cout << "Error: bad input => " << date << std::endl; return 1;}
	day = day.substr(0, 2);
	if (year.length() != 4 || month.length() != 2 || day.length() != 2 \
	|| std::atoi(month.c_str()) > 12 || std::atoi(month.c_str()) < 1 \
	|| std::atoi(day.c_str()) > 31 || std::atoi(day.c_str()) < 1 )
		{std::cout << "Error: bad input => " << date << std::endl; return 1;}
	if (std::atoi(month.c_str()) == 4 || std::atoi(month.c_str()) == 6 \
	|| std::atoi(month.c_str()) == 9 || std::atoi(month.c_str()) == 11){
		if (std::atoi(day.c_str()) > 30)
			{std::cout << "Error: bad input => " << date << std::endl; return 1;}
	}
	if ((std::atoi(year.c_str()) % 4 == 0 && std::atoi(year.c_str()) % 100 != 0) \
		|| std::atoi(year.c_str()) % 400 == 0){
		if (std::atoi(month.c_str()) == 2 && std::atoi(day.c_str()) > 29)
			{std::cout << "Error: bad input => " << date << std::endl; return 1;}
	}
	else{
		if (std::atoi(month.c_str()) == 2 && std::atoi(day.c_str()) > 28)
			{std::cout << "Error: bad input => " << date << std::endl; return 1;}
	}
	if (date < this->data.begin()->first)
			{std::cout << "Error: bad input => " << date << std::endl; return 1;}
	return 0;
}

void	BitcoinExchange::ParsingValue(std::string value, std::string date)
{
	if (value[0] != ' ')
		{std::cout << "Error: bad input => " << value << std::endl; return;}
	value.erase(0, 1);
	if (value[0] == '-')
		{std::cout << "Error: not a positive number." << std::endl; return;}
	int point = 0;
	for (size_t i = 0; i < value.length(); i++){
		if (value[i] == '.')
			{point++; i++;}
		if (!std::isdigit(value[i]))
			{std::cout << "Error: bad input => " << value << std::endl; return;}
	}
	if (point > 1 || value[0] == '.' )
		{std::cout << "Error: bad input => " << value << std::endl; return;}
	double val = std::strtod(value.c_str(), NULL);
	if(val > 1000)
		{std::cout << "Error: too large a number." << std::endl; return;}
	std::cout << date << " => " << value << " = " ;
	std::cout << val * (--this->data.upper_bound(date))->second << std::endl;
}

void BitcoinExchange::ExchangeData(std::string InputFile)
{
	this->FillMap("data.csv");
	std::fstream file(InputFile);
	std::string line, date, value;
	if (!file.is_open())
		throw std::runtime_error("File not found");
	if (!std::getline(file, line))
		throw std::runtime_error("File is empty");
	if (line != "date | value")
		throw std::runtime_error("Invalid file format");
	while (std::getline(file, line)){
		std::stringstream ss(line);
		std::getline(ss, date, '|');
		std::getline(ss, value, '\0');
		if (!ParsingDate(date))
			ParsingValue(value, date);
	}
	file.close();
}