/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 18:10:56 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:01:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <iostream>
#include <cstdlib>

Warlock::Warlock(std::string const &name)
	: _name(name)
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

void				Warlock::addTitle(std::string const &title)
{
	titles.push_back(std::string(title));
}

void				Warlock::removeTitle(std::string const &title)
{
	titles.remove(title);
}

void				Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name;
	for (std::list<std::string>::const_iterator it = titles.begin(); it != titles.end(); ++it)
		std::cout << ", " << *it;
	std::cout << " ! And the mayor of a little village on the coast. Very scenic during springtime, you should visit sometime !" << std::endl;
}

void				Warlock::addQuote(std::string const &quote)
{
	quotes.push_back(quote);
}

void				Warlock::removeQuote(std::string const &quote)
{
	for (std::vector<std::string>::const_iterator it = quotes.begin(); it != quotes.end(); ++it)
	{
		if ((*it).compare(quote) == 0)
		{
			quotes.erase(it);
			return ;
		}
	}
}

void				Warlock::talk(void) const
{
	if (quotes.size() <= 0)
		return ;
	std::cout << _name << ": " << quotes[rand() % quotes.size()] << std::endl;
}
