/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:12:12 by afatir            #+#    #+#             */
/*   Updated: 2023/12/27 21:12:13 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#define RED "\e[1;31m"
#define WHI "\e[0;37m"
#define GRE "\e[1;32m"
#define YEL "\e[1;33m"

#include <iostream>
#include <stack>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
public:
	MutantStack();
	MutantStack(MutantStack const &src);
	MutantStack(const C& c);
	~MutantStack();
	MutantStack &operator=(MutantStack const & src);

	typedef typename C::iterator iterator;
	iterator begin();
	iterator end();
};

template <typename T, typename C>
MutantStack<T, C>::MutantStack() : std::stack<T, C>(){}

template <typename T, typename C>
MutantStack<T, C>::MutantStack(MutantStack const & src): std::stack<T, C>(src){}

template <typename T, typename C>
MutantStack<T, C>::MutantStack(const C & src): std::stack<T, C>(src){}

template <typename T, typename C>
MutantStack<T, C>::~MutantStack(){}

template <typename T, typename C>
MutantStack<T, C> &MutantStack<T, C>::operator=(MutantStack const & src)
{
	if (this != &src)
		std::stack<T, C>::operator=(src);
	return *this;
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::begin()
{
	return this->c.begin();
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::end()
{
	return this->c.end();
}

#endif