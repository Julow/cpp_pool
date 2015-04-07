/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 17:51:08 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 18:20:18 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <fstream>

void			Cat::read(std::string const &str)
{
	if (str.compare("-") == 0)
		_read(std::cin);
	else
		_readFile(str);
}

void			Cat::_readFile(std::string const &str)
{
	std::fstream	in(str, std::ios_base::in);

	if (!in.is_open())
		std::cout << "cato9tails: " << str << ": No such file or directory" << std::endl;
	else
		_read(in);
}

void			Cat::_read(std::istream &in)
{
	char			buff[BUFF_SIZE];

	in.clear();
	while (!in.eof())
	{
		in.read(buff, BUFF_SIZE);
		std::cout.write(buff, in.gcount());
	}
}
