/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStatck.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:04:15 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/22 19:04:15 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# define CYAN "\e[36m"
# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

#include <stack>

template <typename T>
class MutantStatck : public std::stack<T>
{
	public:

		MutantStatck(): std::stack<T>() {}
		MutantStatck(const MutantStatck &other): std::stack<T>(other){}
		MutantStatck &operator=(const MutantStatck &other)
		{
			std::stack<T>::operator=(other);
			return *this;
		}
		~MutantStatck(){}

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin() { return (this->c.begin()); }
		iterator end() { return (this->c.end()); }

};

#endif