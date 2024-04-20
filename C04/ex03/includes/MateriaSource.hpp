/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:06:31 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/20 14:19:49 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria *materials[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &ref);
		MateriaSource &operator=(const MateriaSource &ref);
		~MateriaSource();

		void learnMateria(AMateria *) override;
		AMateria *createMateria(std::string const &type) override;
};

#endif