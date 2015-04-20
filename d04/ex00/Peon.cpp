/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 14:45:45 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 15:32:38 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const &name)
	: Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src)
	: Victim(src)
{
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void				Peon::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}

Peon				&Peon::operator=(Peon const &rhs)
{
	Victim::operator=(rhs);
	return (*this);
}
