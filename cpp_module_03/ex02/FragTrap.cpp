/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:40:36 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/19 22:40:36 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << GREEN << "FragTrap default constructor called" << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << GREEN << "Fragtrap " << this->_name << " named constructor called." << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << GREEN << "FragTrap copy constructor called" << RESET << std::endl;
}

FragTrap::~FragTrap () {
	std::cout << RED << "FragTrap destructor called" <<  RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &overload)
{
	ClapTrap::operator=(overload);
	std::cout << GREEN << "FrapTrap operator overload called" << RESET << std::endl;
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << GREEN << "FragTrap " << this->_name << " is attacking "\
		<< target << " causing " << this->_attackDamage << " points of damage. But he is loosing 1 energy point and  has "\
		<< this->_energyPoints << " energy points." << RESET << std::endl;
		return ;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << RED << "FragTrap " << this->_name << " wants to attack " << target << ", but is dead." << RESET << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << RED << "FragTrap" << this->_name << " wants to attack " << target << ", but doesnt have enough energy" << RESET << std::endl;
		return ;
	}

}

void FragTrap::highFivesGuys(void)
{
	std::cout << MAGENTA <<"FragTrap" << this->_name << " says a positive highfive guys request" << RESET << std::endl;
}
