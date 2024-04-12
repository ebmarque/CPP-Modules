/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:55:19 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/12 15:34:13 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

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

	FragTrap::health = 100;
	ScavTrap::energy = 50;
	FragTrap::attack_damage = 30;

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