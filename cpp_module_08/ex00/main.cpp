/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:54:47 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/22 12:54:47 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v1;
	v1.push_back(5);
	v1.push_back(-12);
	v1.push_back(10);
	v1.push_back(-20);
	v1.push_back(61);
	v1.push_back(42);

	try
	{
		std::vector<int>::iterator position = easyfind(v1, 61);
		std::cout << GREEN << "value found: " << *position << RESET << std::endl;
			
		
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

	try
	{
		std::vector<int>::iterator position = easyfind(v1, 60);
		std::cout << GREEN << "value found: " << *position << RESET << std::endl;
			
		
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << '\n';
	}
	
}