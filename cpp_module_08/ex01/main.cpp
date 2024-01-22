/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:09:17 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/22 14:09:17 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Span.hpp"

int main()
{
	std::cout << MAGENTA << "---------Subject Test------" << RESET << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << YELLOW << "Shortest Span: " << sp.shortestSpan() << RESET << std::endl;
	std::cout << GREEN << "Longest Span: " << sp.longestSpan() << RESET << std::endl;
	std::cout << MAGENTA << "---------10,000 Number Test------" << RESET << std::endl;

	try
	{
		std::srand(std::time(0));
		Span sp = Span(10000);

		 std::vector<int> newNumbers(10000);
        std::generate(newNumbers.begin(), newNumbers.end(), std::rand);
        sp.addRange(newNumbers.begin(), newNumbers.end());
	// Print the stored numbers
    // std::vector<int> storedNumbers = sp.getNumbers();
    // std::cout << "Stored Numbers: ";
    // for (const auto &num : storedNumbers)
    // {
    //     std::cout << BLUE << num << " " << RESET << std::endl;
    // }
	// std::cout << GREEN << "Number of elements: " <<storedNumbers.size() << RESET << std::endl;

	std::cout << YELLOW << "Shortest Span: " << sp.shortestSpan() << RESET << std::endl;
	std::cout << GREEN << "Longest Span: " << sp.longestSpan() << RESET << std::endl;    

	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	
}