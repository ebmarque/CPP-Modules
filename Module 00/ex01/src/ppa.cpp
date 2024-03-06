/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ppa.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:08:00 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/06 18:25:57 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void	_instruction(void)
{
	std::cout << "Wellcome to your Personal PhoneBook Assistent\n\n"
			  << "Please inser one of the following commands: ⤵️\n"
			  << GREEN << "• ADD: save a new contact\n" << RESET
			  << GREEN << "• SEARCH: display a specific contact\n" << RESET
			  << GREEN << "• EXIT\n\n" << RESET;
}
bool	_is_valid_command(std::string input)
{
	if (!input.compare("ADD") || !input.compare("SEARCH") \
		|| !input.compare("EXIT"))
		return (true);
	return (false);
}

void	_action(std::string input, PhoneBook &ppa)
{
	if (!input.compare("ADD"))
		ppa.add();
	else if (!input.compare("SEARCH"))
		ppa.search();
	else
	{
		std::cout << RED << "\n\nBye Bye!\n\n" << RESET;
		exit(0);
	}
}

void _get_command(PhoneBook &ppa)
{
	std::string input;
	int contador = 0;
	while (1)
	{
		std::cout << "passagem :" << contador << std::endl;
		std::cout << RED << "Command: " << RESET;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if (!_is_valid_command(input))
		{
			std::cout << YELLOW << "Error: Invalid command"
					  << " please try again.\n\n" << RESET;
		}
		else
			_action(input, ppa);
		std::cin.clear();
		std::cout << "INPUT DE FORA: '" << input << "'" << std::endl;
		contador++;
	}
}

int main(void)
{

	PhoneBook ppa;	
	_instruction();
	_get_command(ppa);
	return (0);
}
