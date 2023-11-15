/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:29:09 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/15 07:29:09 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0) {}

Point::Point (const float num1, const float num2): _x(num1), _y(num2) {}

Point::Point (const Point &copy): _x(copy._x), _y(copy._y) {}

Point::~Point() {}

Point &Point::operator=(Point &copy)
{
    return (copy);
}

Fixed Point::getX() const
{
	return (this->_x);
}
Fixed Point::getY() const
{
	return (this->_y);
}
