/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:39:25 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/18 15:48:13 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ICharacter.hpp"

ICharacter::~ICharacter()
{
	print("[ICHARACTER]: Deleted.", BRIGHT_YELLOW);
}

ICharacter::ICharacter(void)
{
	print("[ICHARACTER]: Default constructor called.", BRIGHT_YELLOW);
	this->name = "Undefined";
}

ICharacter::ICharacter(const ICharacter& ref)
{
	print("[ICHARACTER]: Copy constructor called.", BRIGHT_YELLOW);
	*this = ref;
}

ICharacter& ICharacter::operator=(const ICharacter& ref)
{
	print("[ICHARACTER]: Copy assignment operator called.", BRIGHT_YELLOW);
	if (this != &ref)
		this->name = ref.name;
	return (*this);
}

