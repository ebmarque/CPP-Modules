/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:12:04 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/06 22:26:55 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::index = 0;

std::string _get_info(std::string text) {
	std::string input;

	while (true)
	{
		std::cout << CYAN << text << RESET;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		size_t start = input.find_first_not_of(" \t\r\n");
		if (start == std::string::npos)
		{
			std::cout << RED << "ERROR: EMPTY FIELD.\n" << RESET;
			continue ;
		}
		size_t end = input.find_last_not_of(" \t\r\n");
		input = input.substr(start, end - start + 1);
		break ;
	}
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
	{
		contacts[index] = Contact(f_name, l_name, n_name, d_secret);
		index++;
	}
	else
	{
		contacts[index] = Contact(f_name, l_name, n_name, d_secret);
		index = 0;
	}
}

int	_get_num() {
	int nbr;
	std::string input_str;
	while (true)
	{
		std::cout << "Insert the index of the contact you wish to display the information: ";
		std::getline(std::cin, input_str);
		std::stringstream ss(input_str);
		if (std::cin.eof())
			exit(0);
		if (!(ss >> nbr) || nbr < 1 || nbr > 8)
			std::cout << RED 
					  << "Invalid input. Please enter a valid index (1 - 8)."
					  << RESET <<  std::endl;
		else
			break ;
	}
	return nbr;
}

void	PhoneBook::search()
{
	int input;
	std::cout << GREEN << std::endl
			  << "  INDEX   | First Name |  Last Name |  Nick Name |   Secret   |\n" 
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
