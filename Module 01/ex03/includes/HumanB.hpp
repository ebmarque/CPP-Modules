/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:31:36 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/07 17:39:34 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
private:
	std::string name;
	Weapon	gun;
public:
	HumanB(std::string n_name);
	~HumanB();
	void	attack(void);
	void	setWeapon(Weapon &n_gun);
};

#endif