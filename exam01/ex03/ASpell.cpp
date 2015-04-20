/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:18:27 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 20:20:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string const &n, std::string const &e)
	: name(n), effects(e), combined_with(0)
{
}

ASpell::~ASpell(void)
{
}

std::string			ASpell::getName(void) const
{
	std::string			n(name);

	if (isCombined())
	{
		n += '-';
		n += combined_with->getName();
	}
	return (n);
}

std::string			ASpell::getEffects(void) const
{
	std::string			e(effects);

	if (isCombined())
	{
		if (combined_with->isCombined())
			e += ", ";
		else
			e += " and ";
		e += combined_with->getEffects();
	}
	return (e);
}

ASpell				*ASpell::cloneCombine(void) const
{
	ASpell				*s = clone();

	if (isCombined())
		s->combine(combined_with->cloneCombine());
	return (s);
}

void				ASpell::launch(ATarget const &t) const
{
	t.getHitBySpell(*this);
}

void				ASpell::combine(ASpell *s)
{
	combined_with = s;
}

bool				ASpell::isCombined(void) const
{
	if (combined_with == 0)
		return (false);
	return (true);
}
