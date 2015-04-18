/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 18:10:56 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 18:21:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock(std::string const &name, std::string const &title)
	: _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << _name << ": Ahhh, I see it clearly. This is the plane of SUCK..." << std::endl;
}

std::string const	&Warlock::getName(void) const
{
	return (_name);
}

std::string const	&Warlock::getTitle(void) const
{
	return (_title);
}

void				Warlock::setTitle(std::string const &title)
{
	_title = title;
}

void				Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << " !" << std::endl;
}
