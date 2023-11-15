/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:40:25 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/14 19:40:25 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
private:
	
	int _RawBits;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &overload);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	//ex01
	Fixed(const int integer);
	Fixed(const float floating_point);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &copy);


#endif