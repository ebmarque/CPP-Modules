/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:55:19 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/15 15:01:03 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "[DiamondTrap]: Default constructor called." << std::endl;

	this->name = "Random";
	this->ClapTrap::name = this->name + "_clap_name";
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref) : ClapTrap(ref), ScavTrap(ref), FragTrap(ref)
{
	std::cout << "[DiamondTrap]: Copy constructor called." << std::endl;
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->attack_damage = FragTrap::attack_damage;
	*this = ref;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ref)
{
	std::cout << "[DiamondTrap]: Copy assignment operator called." << std::endl;
	if (this != &ref)
		this->name = ref.name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap]: "
			  << this->name << " has been destroyed!"
			  << std::endl;
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n), ScavTrap(n), FragTrap(n)
{
	this->name = n;
	this->ClapTrap::name = n + "_clap_name";

	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->attack_damage = FragTrap::attack_damage;

	std::cout << "[DiamondTrap]: "
			  << this->name
			  << " has been created!"
			  << std::endl
			  << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am a DiamondTrap named " 
			  << this->name 
			  << ", ClapTrap name: " 
			  << ClapTrap::name << std::endl << std::endl;
}