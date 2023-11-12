/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:05:52 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/10 19:15:45 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:

	std::string _type;
		
	public:
		Weapon(std::string weaponType);
		~Weapon();

		std::string const getType();
		void setType(std::string weaponType);
};



#endif