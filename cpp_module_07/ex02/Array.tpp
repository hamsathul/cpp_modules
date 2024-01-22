/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:35:33 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/21 22:35:33 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(new T[0]), length(0) 
{
	std::cout << GREEN << "Empty Array created " <<  RESET << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), length(n) {

	std::cout << GREEN << "Array created with size: " << length << RESET << std::endl;
}

template <typename T>
Array<T>::Array(const Array &other) : array(new T[other.size()]), length(other.size())
{
	for (unsigned int i = 0; i < length; ++i)
		array[i] = other.array[i];
	std::cout << GREEN << "Array Copied with size: " << length << RESET << std::endl;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] array;
		array = new T[other.size()];
		length = other.size();
		for (unsigned int i = 0; i < length; ++i)
			array[i] = other.array[i];
	}
	std::cout << GREEN << "Array Assigned with size: " << length << RESET << std::endl;
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << RED << "Array Destroyed" << RESET << std::endl;
	delete[] array;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= length)
		throw std::out_of_range("Index out of bounds");

	return array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return length;
}

#endif