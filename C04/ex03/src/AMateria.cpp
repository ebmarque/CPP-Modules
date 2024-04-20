/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:58:56 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/19 08:11:29 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

void print(std::string text, std::string COLOR)
{
	std::cout << COLOR << text << RESET << std::endl;
}

AMateria::~AMateria()
{
	print("[AMateria]: Deleted.", BRIGHT_GREEN);
}

AMateria::AMateria()
{
	print("[AMateria]: Default constructor called.", BRIGHT_GREEN);
	this->type = "Undefined";
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
	if (this != &ref)
		this->type = ref.type;
	return (*this);
}

std::string AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	print("[AMateria]: 'use' Method called.", BRIGHT_GREEN);
}

