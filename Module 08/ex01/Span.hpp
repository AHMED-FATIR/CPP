/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:10:06 by afatir            #+#    #+#             */
/*   Updated: 2023/12/27 21:10:08 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <exception>

class Span
{
private:
	unsigned int n;
	std::list<int> list;
public:
	Span();
	Span(unsigned int n);
	~Span();
	Span(Span const & src);
	Span &operator=(Span const & src);

	void addNumber(unsigned int n);
	int shortestSpan();
	int longestSpan();
	void addNumber(std::list<int>::iterator begin, std::list<int>::iterator end);

	class FullException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class NoSpanException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class RangeException : public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif