/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:52:24 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/12 12:12:31 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "[FRAGTRAP] : DEFAULT CONSTRUCTOR USED!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap]: "
			  << this->name
			  << " has been destroyed!"
			  << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	this->health = 100;
	this->energy = 100;
	this->attack_damage = 30;

	std::cout << "[FragTrap]: " << this->name
			  << " has been created!"
			  << std::endl
			  << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->energy <= 0)
	{
		std::cout << "[FragTrap]: " << this->name << " is out of energy." << std::endl;
		return;
	}
	std::cout << "[FragTrap]: " << this->name << " high fives everybody." << std::endl;
	this->energy -= 1;
}
