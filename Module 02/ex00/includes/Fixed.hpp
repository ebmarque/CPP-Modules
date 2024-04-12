/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:30:04 by ebmarque          #+#    #+#             */
/*   Updated: 2024/04/08 12:41:29 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <cmath>


class Fixed
{
	private:
		int					point_value;	
		static const int	fractional_part = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &ref);
		Fixed& operator=(const Fixed& o);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};


#endif