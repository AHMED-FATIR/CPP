/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:12:23 by afatir            #+#    #+#             */
/*   Updated: 2023/12/27 21:12:25 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
std::cout << GRE << "-------------------- 1 --------------------" << WHI << std::endl;
	{
		std::list<int> mstack;
		mstack.push_front(5);
		mstack.push_front(17);
		std::cout << *mstack.begin() << std::endl;
		mstack.pop_front();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
std::cout << GRE << "-------------------- 2 --------------------" << WHI << std::endl;
 	{
   		MutantStack<int, std::list<int> > St;
		
   		St.push(10);
   		St.push(20);
   		St.push(30);
		
   		MutantStack<int, std::list<int> >::iterator it = St.begin();
		for (; it != St.end(); it++)
			std::cout << *it << std::endl;
		
		std::cout << "---" << std::endl;
   		MutantStack<int, std::list<int> > St1(St);
   		MutantStack<int, std::list<int> >::iterator it1 = St1.begin();
		for (; it1 != St1.end(); it1++)
			std::cout << *it1 << std::endl;
	}
std::cout << GRE << "-------------------- 3 --------------------" << WHI << std::endl;
	{
		std::vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
   		std::vector<int>::iterator itv = v.begin();
		for (; itv != v.end(); itv++)
			std::cout << *itv << std::endl;

		std::cout << "---" << std::endl;
   		MutantStack<int, std::vector<int> > v2(v);
   		MutantStack<int, std::vector<int> >::iterator its = v2.begin();
		for (; its != v2.end(); its++)
			std::cout << *its << std::endl;

		std::cout << "---" << std::endl;
   		MutantStack<int, std::vector<int> > v3;
		v3 = v2;
		v3.pop();
		std::cout << v3.top() << std::endl;
	}
std::cout << GRE << "-------------------- 4 --------------------" << WHI << std::endl;
	{
		std::vector<char> v;
		v.push_back('a');
		v.push_back('b');
		v.push_back('c');
   		std::vector<char>::iterator itv = v.begin();
		for (; itv != v.end(); itv++)
			std::cout << *itv << std::endl;

		std::cout << "---" << std::endl;
   		MutantStack<char, std::vector<char> > v2(v);
   		MutantStack<char, std::vector<char> >::iterator its = v2.begin();
		for (; its != v2.end(); its++)
			std::cout << *its << std::endl;

		std::cout << "---" << std::endl;
   		MutantStack<char, std::vector<char> > v3;
		v3 = v2;
		v3.pop();
		std::cout << v3.top() << std::endl;
	}
	return 0;
}