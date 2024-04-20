/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:56:40 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/19 08:23:32 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		~Cure();
		Cure();
		Cure(const Cure& ref);
		Cure& operator=(const Cure& ref);

		AMateria* clone(void) const override;
		void use(ICharacter &target) override;
};

#endif