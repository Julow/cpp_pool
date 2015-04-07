/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 12:12:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 12:42:20 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

const char		*g_names[] = {
	"SOLOOL",
	"BRAINFUCK",
	"WALKER",
	"PHP_POOL",
	"ZAZZZZZ",
	"BRIAN"
};

ZombieEvent::ZombieEvent(void)
	: _type("Nope")
{
}

ZombieEvent::~ZombieEvent(void)
{
}

void			ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, _type));
}

void			ZombieEvent::randomChump()
{
	Zombie			zomb(g_names[rand() % (sizeof(g_names) / 8)], _type);

	zomb.announce();
}
