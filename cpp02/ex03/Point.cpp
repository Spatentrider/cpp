/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:47:03 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/02 13:05:12 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0) {}

Point::~Point(void) {}

Point::Point(Point const &other)
{
	*this = other;
}

Point::Point(Fixed const x, Fixed const y): _x(x), _y(y) {}

Point&	Point::operator=(Point const &other)
{
	(void) other;
	return *this;
}

Fixed const &Point::getX(void) const
{
	return _x;
}

Fixed const &Point::getY(void) const
{
	return _y;
}
