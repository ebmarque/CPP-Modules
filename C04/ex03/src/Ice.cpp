/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:11:56 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/18 14:39:09 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::~Ice()
{
	print("[ICE]: Deleted.", BRIGHT_CYAN);
}

Ice::Ice() : AMateria("ice")
{
	print("[ICE]: Default constructor called.", BRIGHT_CYAN);
	
}

Ice::Ice(const Ice& ref)
{
	print("[ICE]: Copy constructor called.", BRIGHT_CYAN);
	*this = ref;
}

Ice& Ice::operator=(const Ice& ref)
{
	print("[ICE]: Copy assigment operator called.", BRIGHT_CYAN);
	if (this != &ref)
		this->type = ref.type;
	return (*this);
}


