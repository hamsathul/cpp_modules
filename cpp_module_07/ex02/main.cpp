/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:35:30 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/21 22:35:30 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.tpp"

#define MAX_VAL 50
int main(int, char **)
{
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << MAGENTA << "Assigned random value " << value << " to numbers[" << i << "]" << RESET << std::endl;
	}
	// SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		 std::cout << YELLOW << "Inside scope: Created and copied arrays" << RESET << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << RED << "didn't save the same value!!" << RESET << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
		std::cout << RED << "Set value at index -2 in numbers" << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << "Exception caught: " << e.what() << RESET << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
		std::cout << GREEN << "Set value at index MAX_VAL in numbers" << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << "Exception caught: " << e.what() << RESET << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
		std::cout << CYAN << "Assigned new random value " << numbers[i] << " to numbers[" << i << "]" << RESET << std::endl;
	}
	delete[] mirror;
	std::cout << RED << "Deleted dynamic array 'mirror'" << RESET << std::endl;
	return 0;
}