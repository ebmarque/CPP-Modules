/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:11:26 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/19 08:41:07 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::~Character()
{
	print("[" + this->name + "]: Deleted.", RED);
	for (int i = 0; i < 4; i++)
		if (this->materials[i])
			delete this->materials[i];
	if (this->materials)
		delete this->materials;
}

Character::Character(void) : ICharacter()
{
	this->name = "Undefined";
	print("[" + this->name + "]: Default constructor called.", RED);
}

Character::Character(const Character& ref)
{
	print("[" + this->name + "]: Copy constructor called.", RED);
	*this = ref;
}

Character& Character::operator=(const Character& ref)
{
	print("[" + this->name + "]: Copy assignment operator called.", RED);
	if (this != &ref)
		this->name = ref.name;
	return (*this);
}

Character::Character(std::string n)
{
	this->name = n;
	print("[" + this->name + "]: Created.", RED);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if(this->materials[i] == NULL && m != NULL)
        {
            this->materials[i] = m;
            return ; 
        }
    }
}

void Character::unequip(int idx)
{
    this->materials[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if(this->materials[idx])
        this->materials[idx]->use(target);
}
