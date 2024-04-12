/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:59:09 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/12 13:18:59 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

/* ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constructed." << std::endl;
} */

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap]: " << this->name << " destructed." << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	this->health = 100;
	this->energy = 50;
	this->attack_damage = 20;
	
	std::cout << "[ScavTrap]: " 
			  << this->name 
			  << " created!" 
			  << std::endl
			  << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "< ScavTrap > - " << this->name 
			  << " is now in Gate keeper mode." 
			  << std::endl;
}
