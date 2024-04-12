/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:09:44 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/13 14:23:32 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File()
{
}

File::File(str n_name, str a_1, str a_2)
{
	this->name = n_name;
	this->arg_1 = a_1;
	this->arg_2 = a_2;
}

File::~File()
{
}

int	File::open()
{
	
}