/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:55:27 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/19 08:19:36 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{	
	public:
		Ice();
		Ice(const Ice& ref);
		Ice& operator=(const Ice& ref);
		~Ice();

		AMateria* clone(void) const override;
		void use(ICharacter &target) override;
};

#endif