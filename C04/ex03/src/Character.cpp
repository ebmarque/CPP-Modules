/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:11:26 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/20 16:57:49 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::~Character()
{
	print("[" + this->name + "]: Deleted.", RED);
	for (int i = 0; i < 4; i++)
		if (this->materials[i])
			delete this->materials[i];
}

Character::Character(void)
{
	this->name = "Undefined";
	print("[" + this->name + "]: Default constructor called.", RED);
}

Character::Character(const Character &ref)
{
	print("[" + this->name + "]: Copy constructor called.", RED);
	if(this != &ref)
	{
		this->name = ref.name;
		for (int i = 0; i < 4; i++)
		{
			/* if(ref.materials[i] != NULL)
				materials[i] = ref.materials[i]->clone();
			else */
			this->materials[i] = NULL;
		}
	}
	*this = ref;
}

Character &Character::operator=(const Character &ref)
{
	if (this != &ref)
	{
		this->name = ref.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->materials[i])
				delete this->materials[i];
			if (ref.materials[i])
				this->materials[i] = ref.materials[i]->clone();
		}
	}
	print("[" + this->name + "]: Copy assignment operator called.", RED);
	return (*this);
}

Character::Character(std::string n)
{
	this->name = n;
	print("[" + this->name + "]: Created.", RED);
}

void Character::equip(AMateria *m)
{
	print("[" + this->name + "]: 'equip' member function called.", RED);
	for (int i = 0; i < 4; i++)
	{
		if (this->materials[i] == NULL)
		{
			this->materials[i] = m;
			print("[" + this->name + "]: Equiped -> " + m->getType() + ".", RED);
			return;
		}
	}
}

void Character::unequip(int idx)
{
	print("[" + this->name + "]: 'unequip' member function called.", RED);
	this->materials[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	print("[" + this->name + "]: 'use' member function called.", RED);
	if (this->materials[idx])
	{
		this->materials[idx]->use(target);
		std::cout << "[" << this->name << "]: uses " << this->materials[idx]->getType() << std::endl;
	}
	else
		std::cout << "[" << this->name << "]: 'cannot use " << this->materials[idx]->getType() << std::endl;
}

std::string const &Character::getName() const
{
	print("[" + this->name + "]: 'getName' member function called.", RED);
	return (this->name);
}
