/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:03:05 by afatir            #+#    #+#             */
/*   Updated: 2024/01/10 12:50:04 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <iomanip>
# include <map>

class BitcoinExchange
{
private:
	std::map<std::string, double> data;
public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & src);
		BitcoinExchange & operator=(BitcoinExchange const & src);
		~BitcoinExchange();

		void FillMap(std::string csvFile);
		void ExchangeData(std::string InputFile);
		double GetVal(std::string dt, double val);
		int ParsingDate(std::string &date);
		void ParsingValue(std::string value, std::string date);
		
};

#endif