/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:22:51 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/21 13:22:51 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstdlib>
#include <iostream>

# define CYAN "\e[36m"
# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

template <typename T>
void iter(T *array, size_t arraylength, void (*function)(T &element))
{
	if (array == NULL || function == NULL)
		return ;
	
	for (size_t i = 0; i < arraylength; i++)
		function(array[i]);
}

template<typename T>
void printElement(T element)
{
	std::cout << GREEN << element << std::endl;
}

#endif