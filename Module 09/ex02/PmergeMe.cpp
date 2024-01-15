/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:57:10 by afatir            #+#    #+#             */
/*   Updated: 2024/01/15 17:10:53 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(PmergeMe const &src){
	*this = src;
}
PmergeMe &PmergeMe::operator=(PmergeMe const &src){
	if (this != &src){
		this->vec = src.vec;
		this->deq = src.deq;
	}
	return *this;
}

//#####################################parsing#######################################
void PmergeMe::print(std::string str)
{
	std::vector<int>::iterator it = this->vec.begin();
	std::cout << GRE << str << WHI;
	while (it != this->vec.end()){
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

void PmergeMe::inside(std::string av)
{
	for (size_t i = 0; i < av.length(); i++){
		if (av[i] == ' ')
			continue;
		if (!std::isdigit(av[i]))
				throw std::runtime_error("Error");
	}
	std::istringstream iss(av);
	std::string tmp;
	while (iss >> tmp){
		this->vec.push_back(std::atoi(tmp.c_str()));
		this->deq.push_back(std::atoi(tmp.c_str()));
	}
}

void PmergeMe::pars(char **av)
{
	for (size_t i = 1; av[i]; i++){
		int flag = 0;
		for (size_t j = 0; av[i][j]; j++){
			if (av[i][j] == ' '){
				flag = 1;
				inside(av[i]);
				break;
			}
			else if (!std::isdigit(av[i][j]))
				throw std::runtime_error("Error");
		}
		if (flag == 0){
			this->deq.push_back(std::atoi(av[i]));
			this->vec.push_back(std::atoi(av[i]));
		}
	}
	if (this->vec.size() == 1)
		throw std::runtime_error("Error");
	print("Before: ");
}

//#####################################vector#######################################
void sortVectorPair(std::vector<std::pair<int, int> > &v_p)
{
	std::pair<int, int> p;
	for(int i = 0; i < (int)v_p.size(); i++){
		p = v_p[i];
		int j = i - 1;
		while (j >= 0 && v_p[j].first > p.first){
			v_p[j + 1] = v_p[j];
			j--;
		}
		v_p[j + 1] = p;
	}
}

void PmergeMe::JacobshtalNumvec(int n, std::vector<int> &vo)
{
	vo.push_back(0);
	if (n <= 1) return ;
	vo.push_back(1);
	if (n <= 2) return ;
	for (int i = 2; i < n + 2; i++){
		vo.push_back(vo[i - 1] + 2 * vo[i - 2]);
	}
	std::vector<int> v;
	v = vo;
	int a, b;
	vo.clear();
	for (int i = 0; i < (int)v.size(); i++){
		a = v[i];
		b = v[i+1];
		while(b > a)
			vo.push_back(b--);
		if ((int)vo.size() >= n)
			break;
	}
	for (int i = 0; i < (int)vo.size(); i++)
		vo[i] -= 1;
}

void PmergeMe::sortVector()
{
	clock_t sv, ev;
	sv = clock();
	int is_odd = 0, odd = 0;
	if (this->vec.size() % 2 != 0)
		is_odd = 1;
	int len = this->vec.size();
	if (is_odd){
		odd = *this->vec.rbegin();
		len -= 1;
	}
	std::vector<std::pair<int, int> > v_p;
	std::pair<int, int> p;
	for (int i = 0; i < len; i += 2){
		if (this->vec[i] >= this->vec[i + 1]){
			p.first = this->vec[i];
			p.second = this->vec[i + 1];
		}
		else{
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
	std::vector<int> jacobs;
	JacobshtalNumvec(len, jacobs);
	main.insert(main.begin(), pending[0]);
	int i = 1, j = 1;
	while(i < (int)pending.size() && j < (int)jacobs.size()){
		if (jacobs[j] < (int)pending.size()){
			main.insert(std::lower_bound(main.begin(), main.end(), pending[jacobs[j]]), pending[jacobs[j]]);
			i++; j++;
		}
		else j++;
	}
	if (is_odd)
		main.insert(std::lower_bound(main.begin(), main.end(), odd), odd);
	this->vec.clear();
	this->vec = main;
	ev = clock();
	print("After: ");
	std::cout << "Time to process a range of "<<this->vec.size() << " elements with std::vector : " << (double)(ev - sv) << " us" << std::endl;
	// this->vec.push_back(1);
	if (!std::is_sorted(this->vec.begin(), this->vec.end()))
		throw std::runtime_error("Error: vector not sorted");
}

//#####################################deque#######################################
void sortDequePair(std::deque<std::pair<int, int> > &d_p)
{
	std::pair<int, int> p;
	for(int i = 0; i < (int)(d_p.size()); i++)
	{
		p = d_p[i];
		int j = i - 1;
		while (j >= 0 && d_p[j].first > p.first){
			d_p[j + 1] = d_p[j];
			j--;
		}
		d_p[j + 1] = p;
	}

}
void PmergeMe::JacobshtalNumdeq(int n, std::deque<int> &vo)
{
	vo.push_back(0);
	if (n <= 1) return ;
	vo.push_back(1);
	if (n <= 2) return ;
	for (int i = 2; i < n + 2; i++){
		vo.push_back(vo[i - 1] + 2 * vo[i - 2]);
	}
	std::deque<int> v;
	v = vo;
	int a, b;
	vo.clear();
	for (int i = 0; i < (int)v.size(); i++)
	{
		a = v[i]; b = v[i+1];
		while(b > a)
			vo.push_back(b--);
		if ((int)vo.size() >= n) break;
	}
	for (int i = 0; i < (int)vo.size(); i++)
		vo[i] -= 1;
}

void PmergeMe::sortDeque()
{
	clock_t sd, ed;
	sd = clock();
	int is_odd = 0, odd = 0;
	if (this->deq.size() % 2 != 0)
		is_odd = 1;
	int len = this->deq.size();
	if (is_odd){
		odd = *this->deq.rbegin();
		len -= 1;
	}

	std::deque<std::pair<int, int> > d_p;
	std::pair<int, int> p;
	for (int i = 0; i < len; i += 2){
		if (this->vec[i] >= this->vec[i + 1]){
			p.first = this->vec[i];
			p.second = this->vec[i + 1];
		}
		else{
			p.first = this->vec[i + 1];
			p.second = this->vec[i];
		}
		d_p.push_back(p);
	}
	sortDequePair(d_p);
	std::deque<int> main;
	std::deque<int> pending;
	for (int i = 0; i < static_cast<int>(d_p.size()); i++){
		main.push_back(d_p[i].first);
		pending.push_back(d_p[i].second);
	}
	std::deque<int> jacobs;
	JacobshtalNumdeq(len, jacobs);
	main.insert(main.begin(), pending[0]);
	int i = 1, j = 1;
	while(i < (int)pending.size() && j < (int)jacobs.size()){
		if (jacobs[j] < (int)pending.size()){
			main.insert(std::lower_bound(main.begin(), main.end(), pending[jacobs[j]]), pending[jacobs[j]]);
			i++; j++;
		}
		else j++;
	}
	if (is_odd)
		main.insert(std::lower_bound(main.begin(), main.end(), odd), odd);
	this->deq.clear();
	this->deq = main;
	ed = clock();
	std::cout << "Time to process a range of "<< this->deq.size() << " elements with std::deque : " << (double)(ed - sd) << " us" << std::endl;
	// this->deq.push_back(1);
	if (!std::is_sorted(this->deq.begin(), this->deq.end()))
		throw std::runtime_error("Error: deque not sorted");
}