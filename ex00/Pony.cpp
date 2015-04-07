/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 11:51:02 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 12:02:52 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "A new Pony is born" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "OMG PONY DIE!" << std::endl;
}

void			ponyOnTheHeap(void)
{
	Pony			*lol;

	lol = new Pony();
	delete lol;
}

void			ponyOnTheStack(void)
{
	Pony			lol;

	return ;
}
