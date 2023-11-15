/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:40:32 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/15 07:40:32 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Barycentric coordinates are a set of three numbers (α, β, γ), often denoted as (u, v, w), that represent
 the weights of the vertices of a triangle in a coordinate system. For a given point P within the triangle ABC, 
 its barycentric coordinates (u, v, w) satisfy the following conditions: 
 
Inside the Triangle: u>= 0, v >=0, w >=0
On the Triangle Edges: 
u=0 when P lies on the line BC (extended beyond B and C),
v=0 when P lies on the line AC (extended beyond A and C),
w=0 when P lies on the line AB (extended beyond A and B).
Inside Triangle: u+v+w=1
These conditions ensure that the barycentric coordinates are valid and represent 
a point within or on the boundary of the triangle.
The formula to compute barycentric coordinates for a point P with
respect to a triangle ABC is as follows:
P=u⋅A+v⋅B+w⋅C
where u, v, and w are the barycentric coordinates of 
point P, and A, B, and C are the vertices of the triangle.
 */

Fixed get_u( Point const a, Point const b, Point const c, Point const point)
{
	Fixed Ax = a.getX();
	Fixed Ay = a.getY();
	Fixed Bx = b.getX();
	Fixed By = b.getY();
	Fixed Cx = c.getX();
	Fixed Cy = c.getY();
	Fixed Px = point.getX();
	Fixed Py = point.getY();

	Fixed	numerator = (Ax * (Cy - Ay)) + (Py - Ay) * (Cx - Ax) - Px * (Cy - Ay);
	Fixed	denominator = (By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay);
	
	return (denominator != 0) ? numerator / denominator : Fixed(0);	
}

Fixed	get_w( Fixed u, Point const a, Point const b, Point const c, Point const p)
{
	Fixed Ay = a.getY();
	Fixed By = b.getY();
	Fixed Cy = c.getY();
	Fixed Py = p.getY();

	Fixed	numerator = Py - Ay - u * (By - Ay);
	Fixed	denominator = Cy - Ay;
	return (denominator != 0) ? numerator / denominator : Fixed(0);

}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed u = get_u(a, b, c, point);
	Fixed w = get_w(u, a, b, c, point);

	return (u > 0 && w > 0 && (u + w) < 1);	
}
