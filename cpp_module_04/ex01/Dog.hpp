/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:19:38 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/21 08:19:38 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
		
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &overload);
		~Dog();

		virtual void makeSound(void) const;
		void printIdeas(void) const;
		void setIdea(unsigned int index, std::string idea);
};