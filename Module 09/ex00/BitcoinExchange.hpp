/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:03:05 by afatir            #+#    #+#             */
/*   Updated: 2024/01/17 14:06:15 by afatir           ###   ########.fr       */
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
		int ParsingDate(std::string &date);
		void ParsingValue(std::string value, std::string date);
		void ExchangeData(std::string InputFile);
		
};

#endif