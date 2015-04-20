/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 20:12:12 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 20:35:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{
}

SpellBook::~SpellBook(void)
{
}

void				SpellBook::learnSpell(ASpell *s)
{
	if (s == NULL)
		return ;
	_spells[s->getName()] = s->cloneCombine();
}

void				SpellBook::forgetSpell(std::string const &s)
{
	if (_spells[s] == NULL)
		return ;
	delete _spells[s];
	_spells.erase(s);
}

ASpell				*SpellBook::createSpell(std::string const &s)
{
	return (_spells[s]->cloneCombine());
}
