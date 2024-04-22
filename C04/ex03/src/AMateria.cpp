/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:58:56 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/22 14:00:25 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

void print(std::string text, std::string COLOR)
{
	std::cout << COLOR << text << RESET << std::endl;
}

AMateria::~AMateria()
{
	print("[AMateria]: Deleted.", RED);
}

AMateria::AMateria()
{
	this->type = "Undefined";
	print("[AMateria]: Default constructor called: created -> " + \
		type + ".", BRIGHT_GREEN);
}

AMateria::AMateria(std::string const &t)
{
	print("[AMateria]: Given-type constructor called.", BRIGHT_GREEN);
	this->type = t;
}

AMateria::AMateria(const AMateria &ref)
{
	print("[AMateria]: Copy constructor called.", BRIGHT_GREEN);
	*this = ref;
}

AMateria &AMateria::operator=(const AMateria &ref)
{
	print("[AMateria]: Copy assignment operator called.", BRIGHT_GREEN);
	(void)ref;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	print("[AMateria]: 'use' Method called.", BRIGHT_GREEN);
	(void)target;
}

