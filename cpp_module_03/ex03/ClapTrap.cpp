/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:47:36 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/19 18:47:36 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "\033[32m" << "ClapTrap default constructor called" << "\033[0m"<<std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "\033[32m" << "ClapTrap " <<_name << " named constructor called" << "\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[31m" << "ClapTrap destructor called" << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "\033[33m" << "ClapTrap copy constructor called" << "\033[0m" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	
}
ClapTrap &ClapTrap::operator=(const ClapTrap &overload)
{
	std::cout << "\033[34m" << "ClapTrap assignment operator overload called" << "\033[0m" << std::endl;
	this->_name = overload._name;
	this->_hitPoints = overload._hitPoints;
	this->_energyPoints = overload._energyPoints;
	this->_attackDamage = overload._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "\033[31m" << "ClapTrap " << this->_name << " wants to attack " << target << " but is already dead" << "\033[0m" << std::endl;
		return ; 
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << "\033[31m" << "ClapTrap " << this->_name << " wants to attack " << target << " but does not have the energy for it" << "\033[0m" <<std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "\033[32m" << "Claptrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage. but he lost 1 enegry point and now has " << this->_energyPoints << " ."<< "\033[0m" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "\033[31m" << "ClapTrap " << this->_name <<" is already dead" << "\033[0m" << std::endl;
		return ;
	}
	amount = (((int)this->_hitPoints - (int)amount) < 0) ? this->_hitPoints : amount;
	this->_hitPoints -= amount;
	std::cout << "\033[33m" << "ClapTrap " << this->_name << " lost " << amount << " hit points (" << this->_hitPoints << " remaining)" << "\033[0m" << std::endl;
}
	
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0 )
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "\033[32m" << "ClapTrap " << this->_name << " repaired itself and gained " << amount << " hitpoints. " \
		<< "he now has " << this->_hitPoints << " hitpoints. but he has lost 1 energy point and now has " << this->_energyPoints << " ." << "\033[0m" << std::endl;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "\033[31m" << "ClapTrap " << this->_name << " wants to repair itself but is already dead" << "\033[0m" << std::endl;
		return ;
	}
	else if (this->_energyPoints <=0)
	{
		std::cout << "\033[31m" << "ClapTrap " << this->_name << " wants to repair itself but is out of energy" << "\033[0m" << std::endl;
		return ;
 	}	
}