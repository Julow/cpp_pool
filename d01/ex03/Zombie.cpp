/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 12:12:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 13:32:26 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

const char		*g_names[] = {
	"SOLOOL",
	"BRAINFUCK",
	"WALKER",
	"PHP_POOL",
	"ZAZZZZZ",
	"BRIAN"
};

Zombie::Zombie(void)
	: _name(g_names[rand() % (sizeof(g_names) / 8)]), _type("Horde")
{
	return ;
}

Zombie::Zombie(std::string const &name, std::string const &type)
	: _name(name), _type(type)
{
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void			Zombie::announce(void)
{
	std::cout << '<' << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}
