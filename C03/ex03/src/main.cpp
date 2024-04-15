/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:41:37 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/15 15:10:19 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

int main(void)
{
/* 	DiamondTrap a("Little-Dogo");
	a.whoAmI();
	 */
	    std::cout << "DiamondTrap beggining..." << std::endl;
    
   /* DiamondTrap Diamond0;
    DiamondTrap Diamond1("Fernando");
    DiamondTrap Diamond2(Diamond1);

    std::cout << std::endl;

    Diamond0.attack("Manel");
    Diamond0.takeDamage(150);
    Diamond0.beRepaired(1);

    Diamond0.attack("Manel");

    Diamond0.whoAmI();

    std::cout << std::endl;
    
    Diamond2.attack("Quim");
    Diamond2.takeDamage(5);
    Diamond2.beRepaired(5);

    Diamond2.attack("Quim");

    Diamond2.whoAmI();

    std::cout << std::endl;
	return 0;*/
	 DiamondTrap ash( "Ash" );
    DiamondTrap ash2( ash );
    DiamondTrap ash3(".");

    ash.whoAmI();
    ash2.whoAmI();
    ash3 = ash;
    ash3.whoAmI();

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
}
