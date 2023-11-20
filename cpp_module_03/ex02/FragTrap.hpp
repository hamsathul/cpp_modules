/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:39:45 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/19 22:39:45 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &overload);
		~FragTrap();

		void attack(std::string const &target);
		void highFivesGuys(void);
};


#endif