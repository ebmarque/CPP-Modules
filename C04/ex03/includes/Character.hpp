/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:53:06 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/19 08:35:11 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria *materials[4];

	public:
		~Character();
		Character();
		Character(const Character &ref);
		Character(std::string n);
		Character &operator=(const Character &ref);

		/*----------------- OVERRIDED FUNCTIONS ------------------*/
		
		void equip(AMateria *m) override;
		void unequip(int idx) override;
		std::string const &getName() const override;
		void use(int idx, ICharacter &target) override;
};

#endif