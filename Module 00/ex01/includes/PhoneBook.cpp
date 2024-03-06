/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:12:04 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/06 18:11:37 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::index = 0;

std::string	_get_info(std::string text)
{
	std::string	input;
	
	while (input.empty())
	{
		std::cout << CYAN << text << RESET;
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (std::cin.eof())
			break ;
		if (input.empty())
			std::cout << RED << "ERROR: EMPTY FIELD.\n" << RESET;
	}
	std::cin.clear();
	return (input);
}
void	PhoneBook::add(void)
{
	std::string	f_name;
	std::string	l_name;
	std::string	n_name;
	std::string	d_secret;
	
	f_name = _get_info("Insert the contact first name: ");
	l_name = _get_info("Insert the contact last name: ");
	n_name = _get_info("Insert the contact nick name: ");
	d_secret = _get_info("Insert the contact darkest secret: ");
	if (index < 7)
		contacts[index] = Contact(f_name, l_name, n_name, d_secret);
	else
	{
		contacts[index] = Contact(f_name, l_name, n_name, d_secret);
		index = 0;
	}
	index++;
}

int	_get_num(void)
{
	int input;
	input = 0;
	while (input < 1 || input > 8)
	{
		std::cout << "Insert the index of the contact you wish to display the information: ";
		std::cin >> input;
		if (std::cin.eof())
			break ;
		if (input < 1 || input > 8)
			std::cout << RED << "ERROR: Please insert a valid INDEX (1 - 8)\n" << RESET;
	}
	std::cin.clear();
	return (input);
}

void	PhoneBook::search()
{
	int input;
	std::cout << GREEN 
			  << "INDEX     | First Name | Last Name  | Nick Name  | Darkest Secret\n" 
			  << RESET;
	for (int i = 0; i < 8; i++)
	{
		contacts[i].display(i + 1);
	}
	std::cout << std::endl;
	std::cout << std::endl;
	input = _get_num();
	contacts[input - 1].show();
}

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}
