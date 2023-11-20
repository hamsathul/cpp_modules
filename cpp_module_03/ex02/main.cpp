/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:56:33 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/19 18:56:33 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() 
{
	std::cout << BLUE << "\n**********************************\n" << RESET << std::endl;
	{
		FragTrap posideon("posideon");
		for (int i = 0; i < 6; i++)
		{
			posideon.attack("Zombie Boss");
			std::cout << YELLOW << "Zombie Boss attacks back with a spear" << RESET << std::endl;
			posideon.takeDamage(30);
			posideon.beRepaired(10);
			posideon.highFivesGuys();
		}
	}	
	std::cout << BLUE << "\n**********************************\n" << RESET << std::endl;
	return (0);
	
}