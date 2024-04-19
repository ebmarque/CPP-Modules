/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:11:26 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/19 07:55:26 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::~Character()
{
	print("[" + this->name + "]: Deleted.", RED);
	for (int i = 0; i < 10; i++)
		delete this->materials[i];
	delete this->materials;
}

Character::Character(void) : ICharacter()
{
	print("[" + this->name + "]: Default constructor called.", RED);
}