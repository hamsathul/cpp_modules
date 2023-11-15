/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:39:12 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/14 19:39:12 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main()
{
    Point a(0, 0);
    Point b(1, 0);
    Point c(0, 1);
    Point Point(0.1, 0.1);

    bool result = bsp(a, b, c, Point);

    std::cout << "Is point inside the triangle? " << (result ? "Yes" : "No") << std::endl;

    return 0;
}
