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

#include "ScavTrap.hpp"
#include <iostream>

int main() {
	{
		ScavTrap zeus("zeus");
		zeus.beRepaired(3);
		for (int i = 0; i < 5; i++) {
			zeus.attack("Zombie Boss");
			std::cout << YELLOW << "Zombie Boss attacks back with a sword" << RESET << std::endl;
			zeus.takeDamage(50);
			zeus.beRepaired(30);
		}
	}
	std::cout << "\n**********************************\n" << std::endl;
	{
		ScavTrap zeus("zeus");
		zeus.guardGate();
	}
	std::cout << "\n**********************************\n" << std::endl;
	{
		ScavTrap zeus("zeus"), hades;
		zeus.attack("zombies");
		zeus.takeDamage(10);
		hades = zeus;
		hades.takeDamage(10);
		zeus.takeDamage(20);
	}	
	return (0);
}