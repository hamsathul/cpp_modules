/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:45:10 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/20 17:45:10 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << GREEN << "DiamondTrap default constructor called" << RESET << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << GREEN << "DiamondTrap " << this->_name << " named constructor called." << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << GREEN << "DiamondTrap copy constructor called" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &overload)
{
	ClapTrap::operator=(overload);
	std::cout << GREEN << "DiamondTrap operator overload function called" << RESET << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "DiamondTrap destructor called" << RESET << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << MAGENTA << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << RESET << std::endl;
}