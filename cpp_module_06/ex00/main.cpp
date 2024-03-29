/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:36:35 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/16 22:36:35 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << RED << "Error\nThe program should have only 1 argument." << RESET << std::endl;
		return 1;
	}

	if (av[1][0] == '\0')
	{
		std::cout << RED << "Error\nThe arguments should not be empty" << RESET << std::endl;
		return 1;
	}

	std::string str(av[1]);
	ScalarConverter::convert(str);
	return 0;
}