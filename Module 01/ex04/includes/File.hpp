/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:54:48 by ebmarque          #+#    #+#             */
/*   Updated: 2024/03/13 14:09:02 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
#define FILE_H

# include <iostream>
# include <string>

typedef std::string str;
class File
{
private:
	str name;
	str arg_1;
	str arg_2;
	int	fd;	
public:
	File();
	File(str n, str a_1, str a_2);
	~File();
	int	open();
	void	replace();
};

#endif