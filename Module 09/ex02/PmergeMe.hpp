/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:57:12 by afatir            #+#    #+#             */
/*   Updated: 2024/01/17 09:45:20 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include<iostream>
#include <sstream>
#include<vector>
#include<algorithm>
#include<deque>
#include<ctime>

#define RED "\e[1;31m"
#define WHI "\e[0;37m"
#define GRE "\e[1;32m"
#define YEL "\e[0;33m"

class PmergeMe
{
private:
	std::vector<int> vec;
	std::deque<int> deq;
	double time;
public:
	PmergeMe();
	PmergeMe(PmergeMe const &src);
	PmergeMe &operator=(PmergeMe const &src);
	~PmergeMe();

	void print(std::string str);

	void parsVector(char **av);
	void insideVector(std::string av);

	void parsDeque(char **av);
	void insideDeque(std::string av);

	void sortVector(char **av);
	void sortDeque(char **av);

	void JacobshtalNumvec(int n, std::vector<int> &jacobshtal);
	void JacobshtalNumdeq(int n, std::deque<int> &jacobshtal);
};

#endif