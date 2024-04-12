/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:59:09 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/12 18:46:28 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

/* ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constructed." << std::endl;
} */

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << this->name << " destructed." << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	this->health = 100;
	this->energy = 50;
	this->attack_damage = 20;
	
	std::cout << "ScavTrap " << this->name << " created!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "[ScavTrap]: " << this->name 
			  << " is now in Gate keeper mode." 
			  << std::endl
			  << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->health == 0)
	{
		std::cout << "[ScavTrap]: " << this->name 
				  << " is dead" << std::endl << std::endl;
	}
	else if (this->energy > 0)
	{
		std::cout << "[ScavTrap]: " << this->name
				<< " attacks " << target << ", causing "
				<< this->attack_damage << " point(s) of damage!"
				<< std::endl << std::endl;
		this->energy--;
	}
	else {
		std::cout << "[ScavTrap]: " << this->name << " has no energy points left!" 
				  << std::endl << std::endl;	
	}
}