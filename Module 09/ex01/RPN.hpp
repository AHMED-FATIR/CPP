/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:03:14 by afatir            #+#    #+#             */
/*   Updated: 2024/01/10 15:55:07 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <cmath>
# include <sstream>
# include <iomanip>
# include <exception>

class RPN
{
private:
	std::stack<int> stack;
	std::string str;
public:
	RPN();
	RPN(std::string str);
	RPN(RPN const & src);
	RPN & operator=(RPN const & src);
	~RPN();

	void calculate();
};

#endif