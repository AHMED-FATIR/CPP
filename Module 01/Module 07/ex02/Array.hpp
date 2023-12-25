/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:42:55 by afatir            #+#    #+#             */
/*   Updated: 2023/12/25 19:43:04 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const & src);
		Array & operator=(Array const & src);
		~Array();

		T & operator[](unsigned int n);
		unsigned int size() const;
		
		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

template <typename T>
Array<T>::Array() : _array(NULL), _size(0){}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n){}

template <typename T>
Array<T>::Array(Array const & src){
	this->_array = NULL;
	*this = src;
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & src){
	if (this != &src)
	{
		this->_size = src._size;
		delete[] this->_array;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array(){
	delete[] this->_array;
}

template <typename T>
T & Array<T>::operator[](unsigned int n){
	if (n >= this->_size)
		throw OutOfRangeException();
	return this->_array[n];
}

template <typename T>
unsigned int Array<T>::size() const{
	return this->_size;
}

template <typename T>
const char *Array<T>::OutOfRangeException::what() const throw(){
	return "Out of range";
}

#endif