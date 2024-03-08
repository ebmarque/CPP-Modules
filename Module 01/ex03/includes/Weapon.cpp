/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:31:39 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/07 17:23:44 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string new_type)
{
	this->type = new_type;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
