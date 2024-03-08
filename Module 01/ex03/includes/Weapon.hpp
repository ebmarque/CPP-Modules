/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:31:41 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/07 17:23:17 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include "HumanA.hpp"
# include "HumanB.hpp"

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string new_type);
	~Weapon();
	const std::string &Weapon::getType(void);
	void	setType(std::string new_type);
};



#endif
