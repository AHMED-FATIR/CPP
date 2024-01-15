/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:57:12 by afatir            #+#    #+#             */
/*   Updated: 2024/01/15 17:01:20 by afatir           ###   ########.fr       */
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
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

class PmergeMe
{
private:
	std::vector<int> vec;
	std::deque<int> deq;
public:
	PmergeMe();
	PmergeMe(PmergeMe const &src);
	PmergeMe &operator=(PmergeMe const &src);
	~PmergeMe();

	void pars(char **av);
	void inside(std::string av);
	void print(std::string str);

	void JacobshtalNumvec(int n, std::vector<int> &jacobshtal);
	void JacobshtalNumdeq(int n, std::deque<int> &jacobshtal);

	void sortVector();
	void sortDeque();
};

#endif