/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:53:06 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/20 15:43:17 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *materials[4];

	public:
		~Character();
		Character();
		Character(const Character &ref);
		Character(std::string n);
		Character &operator=(const Character &ref);

		/*----------------- OVERRIDED FUNCTIONS ------------------*/
		
		void equip(AMateria *m);
		void unequip(int idx);
		std::string const &getName() const;
		void use(int idx, ICharacter &target);
};

#endif