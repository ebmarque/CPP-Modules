/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:16:33 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/06 18:01:40 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string f_name, std::string l_name, \
	std::string n_name, std::string d_secret)
{
	first_name = f_name;
	last_name = l_name;
	nick_name = n_name;
	darkest_secret = d_secret;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}
void Contact::display(int i)
{
	std::cout << GREEN << i << "         | " << RESET;
	if (first_name.size() > 10)
		std::cout << GREEN << first_name.substr(0, 8) << "." << RESET;
	else
	{
		std::cout << GREEN << first_name;
		for (int i = 0; i < 10 - (int)first_name.size(); i++)
			std::cout << " ";
		std::cout << GREEN << " | " << RESET;	
	}
	if (last_name.size() > 10)
		std::cout << GREEN << last_name.substr(0, 8) << "." << RESET;
	else
	{
		std::cout << GREEN << last_name;
		for (int i = 0; i < 10 - (int)last_name.size(); i++)
			std::cout << " ";
		std::cout << GREEN << " | " << RESET;
	}
	if (nick_name.size() > 10)
		std::cout << GREEN << nick_name.substr(0, 8) << "." << RESET;
	else 
	{
		std::cout << GREEN << nick_name;
		for (int i = 0; i < 10 - (int)nick_name.size(); i++)
			std::cout << " ";
		std::cout << GREEN << " | " << RESET;
	}
	if (darkest_secret.size() > 10)
		std::cout << GREEN << darkest_secret.substr(0, 8) << "." << RESET;
	else 
	{
		std::cout << GREEN << darkest_secret << RESET;
		for (int i = 0; i < 10 - (int)darkest_secret.size(); i++)
			std::cout << " ";
	}
	std::cout << std::endl;
}

void	Contact::show()
{
	std::cout << BLUE << first_name << std::endl;
	std::cout << BLUE << last_name << std::endl;
	std::cout << BLUE << nick_name << std::endl;
	std::cout << BLUE << darkest_secret << std::endl << std::endl;
}