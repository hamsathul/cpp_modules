/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:32:41 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/10 18:58:23 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) :_type(weaponType)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string weaponType)
{
	this->_type = weaponType;
}