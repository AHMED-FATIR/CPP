/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:08:00 by afatir            #+#    #+#             */
/*   Updated: 2023/12/27 21:08:02 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void print(T &container)
{
	typename T::iterator it;
	for (it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int main()
{
	std::vector<int> v;
	std::list<int> l;
	std::deque<int> d;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		l.push_back(i);
		d.push_back(i);
	}
	print(v); print(l); print(d);
	std::cout << "------------------------------" << std::endl;
	try
	{
		std::cout << *easyfind(v, 5) << std::endl;
		std::cout << *easyfind(l, 5) << std::endl;
		std::cout << *easyfind(d, 5) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	try
	{
		std::cout << *easyfind(v, 15) << std::endl;
		std::cout << *easyfind(l, 15) << std::endl;
		std::cout << *easyfind(d, 15) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	return 0;
}