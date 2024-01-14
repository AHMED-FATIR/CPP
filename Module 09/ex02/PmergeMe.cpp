/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:57:10 by afatir            #+#    #+#             */
/*   Updated: 2024/01/14 05:52:39 by afatir           ###   ########.fr       */
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
	// print();
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
/*
sarting sorting with the ford-johnson algorithm
steps:
1-Group the elements of vector into [ n / 2 ] pairs of elements
2-determine the larger element in each pair
3-recursively sort the larger elements
4-create the main chain and the pending chain
5-generate theorder of instructions:
	To make life easier generate the order of insertion first
	use jacobsthal sequence
	 with a specially chosen insertion ordering
6-Insert the elements of the pend into the main chain
7-Insert the elements of the main chain into the vector
	 
*/

void sortVectorPair(std::vector<std::pair<int, int> > &v_p)
{
	std::pair<int, int> p;
	for(int i = 0; i < static_cast<int>(v_p.size()); i++)
	{
		p = v_p[i];
		int j = i - 1;
		while (j >= 0 && v_p[j].first > p.first)
		{
			v_p[j + 1] = v_p[j];
			j--;
		}
		v_p[j + 1] = p;
	}
}

void PmergeMe::JacobshtalNum(int n, std::vector<int> &v)
{
	v.push_back(0);
	if (n == 1)
		return ;
	v.push_back(1);
	if (n == 2)
		return ;
	for (int i = 2; i < n; i++){
		v.push_back(v[i - 1] + 2 * v[i - 2]);
	}
}

void PmergeMe::sortVector()
{
	int is_odd = 0;
	int unp;
	if (this->vec.size() % 2 != 0)
		is_odd = 1;
	int len = this->vec.size();
	if (is_odd)
	{
		unp = this->vec[len - 1];
		len -= 1;
	}
	std::vector<std::pair<int, int> > v_p;
	std::pair<int, int> p;
	for (int i = 0; i < len; i += 2)
	{
		if (this->vec[i] >= this->vec[i + 1])
		{
			p.first = this->vec[i];
			p.second = this->vec[i + 1];
		}
		else
		{
			p.first = this->vec[i + 1];
			p.second = this->vec[i];
		}
		v_p.push_back(p);
	}
	sortVectorPair(v_p);
	std::vector<int> main;
	std::vector<int> pending;
	for (int i = 0; i < static_cast<int>(v_p.size()); i++){
		main.push_back(v_p[i].first);
		pending.push_back(v_p[i].second);
	}
	// std::vector<int> jacobs;
	// int n = this->vec.size();
	// JacobshtalNum(n, jacobs);
	this->vec.clear();
	// main.push_back(pending[0]);
	// pending.erase(pending.begin());
	for (int i = 0; i < static_cast<int>(pending.size()); i++)
	{
		int low = 0;
		int high = main.size() - 1;
		int mid = 0;
		while (low <= high)
		{
			mid = (low + high) / 2;
			if (pending[i] < main[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		main.insert(main.begin() + low, pending[i]);
	}
	if (is_odd)
		main.insert(std::lower_bound(main.begin(), main.end(), unp), unp);
	this->vec = main;
	print();
}
