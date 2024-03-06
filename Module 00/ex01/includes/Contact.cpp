/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:16:33 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/06 21:54:00 by ebmarque         ###   ########.fr       */
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
void _contact_grid(std::string str)
{
	if (str.size() > 10)
		std::cout << GREEN << str.substr(0, 9) << "." << RESET;
	else
	{
		for (int i = 0; i < 10 - (int)str.size(); i++)
			std::cout << " ";
		std::cout << GREEN << str;
	}
		std::cout << GREEN << " | " << RESET;	
}

void Contact::display(int i)
{
	std::cout << GREEN << "    " << i << "     | " << RESET;
	_contact_grid(first_name);
	_contact_grid(last_name);
	_contact_grid(nick_name);
	_contact_grid(darkest_secret);
	
	std::cout << std::endl;
}

void	Contact::show()
{
	std::cout << BLUE << "\n\nFirst name: " << RESET << first_name << std::endl;
	std::cout << BLUE << "Last name: " << RESET << last_name << std::endl;
	std::cout << BLUE << "Nick name: " << RESET << nick_name << std::endl;
	std::cout << YELLOW 
	<< "Darkest secret: " << RESET << darkest_secret << std::endl << std::endl;

}