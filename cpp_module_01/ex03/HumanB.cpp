/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:50:00 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/10 16:35:28 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :_name(name)
{
	return ;
}

HumanB::~HumanB(void)
{

}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << (*this->_weapon).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->_weapon = &Weapon;
}