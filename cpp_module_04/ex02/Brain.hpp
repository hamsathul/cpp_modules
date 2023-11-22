/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:17:39 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/21 09:17:39 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# define CYAN "\e[36m"
# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define YELLOW "\e[33m"
# define GREEN "\e[32m"
# define RED "\e[31m"
# define RESET "\e[0m"

class Brain
{
	private:
		std::string _ideas[100];
	
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &oveload);
		~Brain();

		const std::string &getIdea(unsigned int index) const;
		void setIdea(unsigned int index, std::string idea);

};