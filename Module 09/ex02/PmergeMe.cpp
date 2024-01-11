/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:57:10 by afatir            #+#    #+#             */
/*   Updated: 2024/01/11 21:13:06 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(PmergeMe const &src){
	*this = src;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &src){
	if (this != &src)
	{
		this->vec = src.vec;
		this->lst = src.lst;
	}
	return *this;
}
//##############################################################################

void PmergeMe::inside(std::string av)
{
	for (size_t i = 0; i < av.length(); i++)
	{
		if (av[i] == ' ')
			continue;
		if (!std::isdigit(av[i]))
			throw std::runtime_error("1: Invalid argument");
	}
	std::istringstream iss(av);
	std::string tmp;
	while (iss >> tmp){
		this->lst.push_back(std::atoi(tmp.c_str()));
		this->vec.push_back(std::atoi(tmp.c_str()));
	}
}

void PmergeMe::parse(char **av)
{
	for (size_t i = 1; av[i]; i++)
	{
		int flag = 0;
		for (size_t j = 0; av[i][j]; j++)
		{
			if (av[i][j] == ' '){
				flag = 1;
				inside(av[i]);
				break;
			}
			else if (!std::isdigit(av[i][j]))
			{
				std::cout << av[i][j] << std::endl;
				throw std::runtime_error("2: Invalid argument");
			}
		}
		if (flag == 0){
			this->lst.push_back(std::atoi(av[i]));
			this->vec.push_back(std::atoi(av[i]));
		}
	}
	print();
}

void PmergeMe::print()
{
	std::list<int>::iterator it = this->lst.begin();
	std::cout << "\tList: ";
	while (it != this->lst.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::vector<int>::iterator it2 = this->vec.begin();
	std::cout << std::endl;
	std::cout << "\tVector: ";
	while (it2 != this->vec.end())
	{
		std::cout << *it2 << " ";
		it2++;
	}
	std::cout << std::endl;
}