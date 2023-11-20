/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:41:19 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/19 20:41:19 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << GREEN << "ScavTrap default constructor called" << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << GREEN << "ScavTrap " << this->_name <<" named constructor called" << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << GREEN << "ScavTrap copy constructor called" << RESET << std::endl;
}

ScavTrap::~ScavTrap () {
	std::cout << RED << "ScavTrap destructor called" <<  RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& overload)
{
	ClapTrap::operator=(overload);
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << MAGENTA << "Scavtrap " << this->_name << " is in the gatekeeper mode." << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << GREEN << "ScavTrap " << this->_name << " is attacking "\
		<< target << " causing " << this->_attackDamage << " points of damage. But he is loosing 1 energy point and  has "\
		<< this->_energyPoints << " energy points." << RESET << std::endl;
		return ;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << RED << "ScavTrap " << this->_name << " wants to attack " << target << ", but is dead." << RESET << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << RED << "ScavTrap" << this->_name << " wants to attack " << target << ", but doesnt have enough energy" << RESET << std::endl;
		return ;
	}

}