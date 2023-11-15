/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:23:12 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/15 07:23:12 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point (const float num1, const float num2);
		Point (const Point &copy);
		~Point();
		Point &operator=(Point &copy);

		Fixed getX() const;
		Fixed getY() const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);





#endif