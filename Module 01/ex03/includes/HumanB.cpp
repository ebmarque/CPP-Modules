/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:31:27 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/07 17:27:53 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n_name)
{
	this->name = n_name;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " 
			  << this->gun.getType() << std::endl; 
}

void	HumanB::setWeapon(Weapon &n_gun)
{
	this->gun = n_gun;
}