/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:09:55 by afatir            #+#    #+#             */
/*   Updated: 2023/12/27 21:09:57 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : n(0){}

Span::Span(unsigned int n) : n(n){}

Span::Span(Span const & src){
	*this = src;
}

Span::~Span(){}

Span &Span::operator=(Span const & src)
{
	if (this != &src){
		this->n = src.n;
		this->list = src.list;
	}
	return *this;
}

void Span::addNumber(unsigned int n)
{
	if (this->list.size() < this->n)
		this->list.push_back(n);
	else
		throw FullException();
}

void Span::addNumber(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	if (this->list.size() + std::distance(begin, end) > this->n)
		throw RangeException();
	std::list<int>::iterator endS = this->list.end();
	while (begin != end){
		endS = this->list.insert(endS, *begin);
		endS++; begin++;
	}
}

int max( int a, int b){if (a > b)return a;return b;}
int min(int a, int b){if (a < b)return a;return b;}

int Span::shortestSpan()
{
	if (this->list.size() <= 1)
		throw NoSpanException();
	std::list<int> tmp = this->list;
	std::list<int>::iterator it = tmp.begin();
	std::list<int>::iterator it2 = ++it; it--;
	int min = (::max(*it, *it2) - ::min(*it, *it2));
	for (it = tmp.begin(); it != tmp.end(); it++)
	{
		it2 = it;
		it2++;
		if (it2 != tmp.end()){
			if (::max(*it, *it2) - ::min(*it, *it2) < min)
				min = ::max(*it, *it2) - ::min(*it, *it2);
		}
	}
	return min;
}

int Span::longestSpan()
{
	if (this->list.size() <= 1)
		throw NoSpanException();
	std::list<int> tmp = this->list;
		std::list<int>::iterator it = tmp.begin();
	std::list<int>::iterator it2 = ++it; it--;
	int max = (::max(*it, *it2) - ::min(*it, *it2));
	for (it = tmp.begin(); it != tmp.end(); it++)
	{
		it2 = it;
		it2++;
		if (it2 != tmp.end()){
			if (::max(*it, *it2) - ::min(*it, *it2) > max)
				max = ::max(*it, *it2) - ::min(*it, *it2);
		}
	}
	return max;
}

const char* Span::FullException::what() const throw(){
	return "The container is full";
}

const char* Span::NoSpanException::what() const throw(){
	return "There is no span to find";
}

const char* Span::RangeException::what() const throw(){
	return "The range is too big";
}
