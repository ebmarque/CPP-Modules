/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:52:52 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/07 16:02:40 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

void	print_msg(std::string str)
{
	std::cout << str << std::endl;
}

Fixed::Fixed()
{
	print_msg("Default constructor called");
	this->point_value = 0;
}

Fixed::Fixed(const Fixed &point)
{
	print_msg("Copy constructor called");
	this->setRawBits(point.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &point)
{
	this->point_value = point.getRawBits();
	if (this != &point)
		this->point_value = point.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	print_msg("Destructor called");
}

int	Fixed::getRawBits(void) const
{
	print_msg("getRawBits member function called");
	return this->point_value;
}

void	Fixed::setRawBits(int const raw)
{
	print_msg("setRawBits member function called");
	this->point_value = raw;
}

