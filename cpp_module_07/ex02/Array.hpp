/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:35:35 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/21 22:35:35 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# define CYAN "\e[36m"
# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

template<typename T>
class Array
{
	private:
		T *array;
		unsigned int length;


	public:

		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array &operator=(const Array &other);
		T &operator[](unsigned int index);
		unsigned int size() const;

};


#endif