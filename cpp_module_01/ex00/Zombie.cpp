/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:13:00 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/09 22:55:11 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(void)
{
	std::cout << this->getName() << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;

}

std::string Zombie::getName(void)
{
	return (this->name);
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
	this->name = "whoami";
}
Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": hooooo....!!!" << std::endl;
}