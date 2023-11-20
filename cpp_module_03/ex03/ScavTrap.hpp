/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:41:22 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/19 20:41:22 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>

# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &overload);
		~ScavTrap();

		void guardGate();
		void attack(const std::string &target);
};

