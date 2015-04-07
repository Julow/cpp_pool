/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 12:48:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 13:36:07 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int n)
	: _size(n)
{
	_zombs = new Zombie[n];
	std::cout << "Start invasion!" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete [] _zombs;
	std::cout << "That escalated quickly" << std::endl;
}

void			ZombieHorde::announce(void)
{
	int				i;

	i = -1;
	while (++i < _size)
		_zombs[i].announce();
}
