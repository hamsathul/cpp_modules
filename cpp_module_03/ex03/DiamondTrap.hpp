/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:45:14 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/20 17:45:14 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		DiamondTrap (std::string name);
		DiamondTrap (const DiamondTrap &copy);
		DiamondTrap &operator=(const DiamondTrap &overload);
		~DiamondTrap();

		using ScavTrap::attack;
		void whoAmI();

};

