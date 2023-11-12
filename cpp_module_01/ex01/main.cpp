/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:29:06 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/10 11:51:40 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *zombiesInHorde;
	int zombieCount;
	std::string zombieName;

	std::cout << "PLEASE ENTER THE NAME OF ZOMBIES" << std::endl;
	std::cin >> zombieName;
	std::cout << "PLEASE ENTER THE NUMBER OF ZOMBIES" << std::endl;
	std::cin >> zombieCount;

	zombiesInHorde = zombieHorde(zombieCount, zombieName);

	for (int i = 0; i < zombieCount; i++)
		zombiesInHorde[i].announce();
	delete [] zombiesInHorde;
}