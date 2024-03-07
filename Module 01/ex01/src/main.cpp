/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:52:58 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/07 11:11:20 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *fresh_zombie = new Zombie(name);
	return (fresh_zombie);
}

void randomChump(std::string name)
{
	Zombie *random = newZombie(name);
	random->announce();
	delete random;
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name);
		horde[i].announce();
	}
	return (horde);
}

int main(void)
{
	Zombie *horde = zombieHorde(7, "Foo");
	delete []horde;
	return (0);
}


