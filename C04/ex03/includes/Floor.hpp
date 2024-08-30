/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:19:09 by ebmarque          #+#    #+#             */
/*   Updated: 2024/08/30 12:33:09 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
#define FLOOR_HPP

#include "AMateria.hpp"
#include "MateriaSource.hpp"

typedef	struct s_DropedMateria
{
	AMateria *item;
	struct s_DropedMateria *next;
} t_DropedMateria;



class Floor
{
	private:
		t_DropedMateria *droped;
	public:
		Floor(void);
		~Floor(void);
		
		static void		dropMateria(AMateria *m);
		static Floor&	getInstace(void);
		void			addFront(AMateria* m);
};


#endif