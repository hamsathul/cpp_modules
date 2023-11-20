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

#include <iostream>
#include "DiamondTrap.hpp"

int main() 
{
	std::cout << BLUE << "\n**********************************\n" << RESET << std::endl;
	{
		DiamondTrap zeus("zeus");
		zeus.whoAmI();
		zeus.beRepaired(3);
		zeus.guardGate();
		for (int i = 0; i < 5; i++) 
		{
			zeus.attack("Zombie Boss");
			std::cout << RED << "Zombie Boss attacks with a sword" << RESET << std::endl;
			zeus.takeDamage(50);
			zeus.beRepaired(30);
		}
	}
	std::cout << BLUE << "\n**********************************\n" << RESET << std::endl;
	return (0);
}