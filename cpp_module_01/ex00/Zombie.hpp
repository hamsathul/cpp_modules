/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:57:05 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/09 22:39:53 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H
# define _ZOMBIE_H

#include <iostream>

class Zombie
{
private:

	std::string name;

public:

	void setName(std::string name);
	std::string getName(void);
	void announce (void);
	
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
};

Zombie* newZombie(std::string name);
void randomChump( std::string name);


#endif