/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:29:38 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/08 12:44:07 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

void	_print(std::string str)
{
	std::cout << str << std::endl;
}

Fixed::Fixed(void)
{
	_print("Default constructor called");	
}

Fixed::Fixed(const Fixed& ref)
{
	_print("Copy constructor called.");
	this->setRawBits(ref.getRawBits());
}



Fixed::~Fixed(void)
{
	_print("Destructor called");
}

int	Fixed::getRawBits(void) const
{
	_print("getRawBits member function called");
	return this->point_value;
}

void	Fixed::setRawBits(const int raw)
{
	_print("setRawBits member function called");
	this->point_value = raw;
}