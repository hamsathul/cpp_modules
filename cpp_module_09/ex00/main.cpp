/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:10:20 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/22 21:10:20 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << RED << "Error: could not open file." << RESET << std::endl;
		return 1;
	}

	BitcoinExchange btc;

	try
	{
		btc.initializeDatabase();
		std::string input(av[1]);
		btc.handleInputFile(input);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

	return 0;
	
}