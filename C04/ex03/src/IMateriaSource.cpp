/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 08:53:39 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/19 11:06:13 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/IMateriaSource.hpp"

IMateriaSource::~IMateriaSource(void)
{
	print("[IMATERIASOURCE]: Deleted.", BRIGHT_YELLOW);
}

IMateriaSource::IMateriaSource(void)
{
	print("[IMATERIASOURCE]: Default constructor called.", BRIGHT_YELLOW);
}

IMateriaSource::IMateriaSource(const IMateriaSource& ref)
{
	print("[IMATERIASOURCE]: Copy constructor called.", BRIGHT_YELLOW);
	*this = ref;	
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& ref)
{
	print("[IMATERIASOURCE]: Default constructor called.", BRIGHT_YELLOW);
	return (*this);
}