/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:11:26 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/22 20:36:50 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::~Character()
{
	print("[" + this->name + "]: Deleted.", RED);
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}

Character::Character(void)
{
	this->name = "Undefined";
	print("[" + this->name + "]: Default constructor called.", YELLOW);
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;	
}

Character::Character(std::string n)
{
	this->name = n;
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;	
	print("[" + this->name + "]: Created.", YELLOW);
}

Character::Character(const Character &ref)
{
	this->name = ref.name;
	print("[" + this->name + "]: Copy constructor called.", YELLOW);
	for (size_t i = 0; i < 4; i++)
	{
		if (ref.inventory[i] != NULL)
			this->inventory[i] = ref.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character &Character::operator=(const Character &ref)
{
	if (this != &ref)
	{
		this->name = ref.name;
	}
	print("[" + this->name + "]: Copy assignment operator called.", YELLOW);
	return (*this);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL && m != NULL)
		{
			this->inventory[i] = m;
			print("[" + this->name + "]: Equiped -> " + m->getType() + ".", YELLOW);
			return;
		}
	}
	if (m != NULL)
	{
		print("[" + this->name + "]: Could not equip " + m->getType() + ".", YELLOW);
		Floor::dropMateria(m);
	}
}

void Character::unequip(int idx)
{
	if (this->inventory[idx] != NULL)
	{
		print("[" + this->name + "]: Drops " + this->inventory[idx]->getType() + ".", YELLOW);
		Floor::dropMateria(this->inventory[idx]);
		this->inventory[idx] = NULL;	
	}
}

void Character::use(int idx, ICharacter &target)
{
	print("[" + this->name + "]: 'use' member function called.", YELLOW);
	if (this->inventory[idx])
	{
		this->inventory[idx]->use(target);
		print("[" + name + "]: uses " + inventory[idx]->getType() + ".", YELLOW);
	}
}

std::string const &Character::getName() const
{
	// print("[" + this->name + "]: 'getName' member function called.", YELLOW);
	return (this->name);
}
