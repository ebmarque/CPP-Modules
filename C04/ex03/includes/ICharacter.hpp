/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:42:59 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/18 15:55:25 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICEHARACTER_HPP
#define ICEHARACTER_HPP

#include "AMateria.hpp"

class ICharacter
{
	protected:
		std::string name;
	public:
		ICharacter();
		ICharacter(const ICharacter& ref);
		ICharacter& operator=(const ICharacter& ref);
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual std::string const & getName() const = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		~ICharacter();
};



#endif