/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:44:34 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/10 16:36:58 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:

		std::string _name;
		Weapon 		*_weapon;
	
	public:

		HumanB(std::string name);
		~HumanB(void);

		void	attack(void);
		void setWeapon(Weapon &weapon);
		
};

#endif