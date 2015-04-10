/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 14:45:52 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 15:33:39 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const &name)
	: _name(name)
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &src)
{
	*this = src;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

std::string const	&Victim::getName(void) const
{
	return (_name);
}

void				Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

Victim				&Victim::operator=(Victim const &rhs)
{
	_name = rhs.getName();
	return (*this);
}

std::ostream		&operator<<(std::ostream &o, Victim const &rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return (o);
}
