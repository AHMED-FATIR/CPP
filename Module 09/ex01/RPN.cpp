/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:06:49 by afatir            #+#    #+#             */
/*   Updated: 2024/01/10 15:55:43 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}
RPN::~RPN(){}

RPN::RPN(std::string str) : str(str){}

RPN::RPN(RPN const & src){
	*this = src;
}


RPN & RPN::operator=(RPN const & src)
{
	if (this != &src)
	{
		this->str = src.str;
		this->stack = src.stack;
	}
	return *this;
}

void RPN::calculate()
{
	std::istringstream iss(this->str);
	std::string tmp;
	int a, b, c;

	while (iss >> tmp)
	{
		if (tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/" || tmp == "%")
		{
			if (this->stack.size() < 2)
				throw std::exception();
			a = this->stack.top();
			this->stack.pop();
			b = this->stack.top();
			this->stack.pop();
			if (tmp == "+")
				c = b + a;
			else if (tmp == "-")
				c = b - a;
			else if (tmp == "*")
				c = b * a;
			else if (tmp == "/"){
				if (a == 0)
					throw std::exception();
				c = b / a;
			}
			this->stack.push(c);
		}
		else
		{
			std::istringstream iss(tmp);
			int d;
			iss >> d;
			this->stack.push(d);
		}
	}
	if (this->stack.size() != 1)
		throw std::exception();
	std::cout << this->stack.top() << std::endl;
}
