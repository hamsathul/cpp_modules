/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:53:05 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/20 22:53:05 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h> 

# define CYAN "\e[36m"
# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"


struct Data 
{
	int id;
	std::string name;
};

class Serializer
{
	private:
		Serializer();
		Serializer(Serializer &copy);
		~Serializer();

		Serializer &operator=(const Serializer &overload);

		public:
			static uintptr_t serialize(Data* ptr);
			static Data* deserialize(uintptr_t raw);

};

#endif