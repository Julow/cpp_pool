/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 15:38:08 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 16:17:10 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>
#include <string>

Replace::Replace(std::string file)
	: _if(file), _of(file + ".replace")
{
}

Replace::~Replace(void)
{
}

void			Replace::start(char const *s1, char const *s2)
{
	std::string		str;
	size_t			pos;

	if (!_if.is_open())
	{
		std::cout << "Cannot open source file" << std::endl;
		return ;
	}
	if (!_if.is_open())
	{
		std::cout << "Cannot open destination file" << std::endl;
		return ;
	}
	while (!_if.eof())
	{
		std::getline(_if, str);
		if (str.size() <= 0)
			continue ;
		while ((pos = str.find(s1)) != std::string::npos)
			str.replace(pos, strlen(s1), s2);
		_of << str << std::endl;
		str.clear();
	}
}
