/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:01:44 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/10 11:09:08 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:

		Zombie();
		~Zombie();

		void announce(void);
		void setName(std::string name);
		std::string getName(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif