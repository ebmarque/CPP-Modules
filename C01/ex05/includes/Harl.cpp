/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:35:59 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/28 15:06:47 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << " love having extra bacon for my " 
			  << "7XL-double-cheese-triple-pickle-special-ketchup "
			  << "burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't "
			  << "put enough bacon in my burger! If you did, "
			  << "I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. "
			  << "I've been coming for years whereas you started working "
			  << "here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak "
			  << "to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	p_func p_function[]	= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(level.c_str()))
		i++;
	if (i < 4)
		(this->*p_function[i])();
	
}

Harl::Harl()
{
	
}

Harl::~Harl()
{
	
}