/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:22:51 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/10 11:51:31 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <sstream>
#include <string>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombiesInHorde = new Zombie[N];
	std::stringstream zombieNumber;

	for (int i = 0; i < N; i++)
	{
		zombieNumber << i + 1;
		zombiesInHorde[i].setName(name + " " + zombieNumber.str());
		zombieNumber.str("");
	}
	return (zombiesInHorde);
}