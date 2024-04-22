/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:25:30 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/22 20:31:43 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Floor.hpp"


Floor::~Floor(void)
{
	print("[FLOOR]: Deleting materias droped on the floor.", RED);
	t_DropedMateria *tmp = NULL;

	while (this->droped)
	{
		tmp = droped->next;
		print("LOG: deleting ->" + this->droped->item->getType(), YELLOW);
		delete this->droped->item;
		delete this->droped;
		droped = tmp;
	}
}

Floor::Floor(void)
{
	print("[FLOOR]: Default constructor called.", MAGENTA);
	this->droped = NULL;
}

Floor& Floor::getInstace(void)
{
	static Floor instance;
	return (instance);
}

void	Floor::addFront(AMateria* m)
{
	t_DropedMateria* new_item = new t_DropedMateria;
	
	new_item->item = m;
	new_item->next = this->droped;
	this->droped = new_item;
	
}

void	Floor::dropMateria(AMateria* m)
{
	getInstace().addFront(m);
}