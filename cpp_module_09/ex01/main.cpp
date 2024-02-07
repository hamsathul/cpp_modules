/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:30:54 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/23 10:30:54 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << RED << "Usage: " << av[0] << " \"RPN_EXPRESSION\"" << RESET << std::endl;
		return 1;
	}

	RPN rpnCalc;
	std::string rpnExp = av[1];

	if(rpnCalc.evaluateExpression(rpnExp) !=0 )
	{
		rpnCalc.~RPN();
		exit(EXIT_FAILURE);
	}
		
	rpnCalc.printResult(std::cout);

	return 0;
}