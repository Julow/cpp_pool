/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 11:51:02 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 18:34:51 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name)
	: _name(name)
{
	std::cout << name << " Pony is born" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "OMG PONY DIE!" << std::endl;
}

void			Pony::say(void)
{
	std::cout << "Wesh !!!!" << std::endl;
}

void			ponyOnTheHeap(void)
{
	Pony			*lol;

	lol = new Pony("HEAPSTER");
	lol->say();
	delete lol;
}

void			ponyOnTheStack(void)
{
	Pony			lol("STALCKER");
	lol.say();
	return ;
}
