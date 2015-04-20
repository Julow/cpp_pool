/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 14:45:58 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 15:32:49 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
	: _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string const	&Sorcerer::getName(void) const
{
	return (_name);
}

std::string const	&Sorcerer::getTitle(void) const
{
	return (_title);
}

void				Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

Sorcerer			&Sorcerer::operator=(Sorcerer const &rhs)
{
	_name = rhs.getName();
	_title = rhs.getTitle();
	return (*this);
}

std::ostream		&operator<<(std::ostream &o, Sorcerer const &rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return (o);
}
