/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:53:06 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/18 16:04:22 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria *materials[10];
	public:
		Character();
		Character(const Character& ref);
		Character& operator=(const Character& ref);
		~Character();
};

#endif