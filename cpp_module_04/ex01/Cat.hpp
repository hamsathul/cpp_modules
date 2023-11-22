/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:20:56 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/20 22:20:56 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;

	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &overload);
		~Cat();

		virtual void makeSound(void) const;
		void printIdeas(void) const;
		void setIdea(unsigned int index, std::string idea);
		

};