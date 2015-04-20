/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:18:27 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:41:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string const &n, std::string const &e)
	: name(n), effects(e)
{
}

ASpell::~ASpell(void)
{
}

std::string const	&ASpell::getName(void) const
{
	return (name);
}

std::string const	&ASpell::getEffects(void) const
{
	return (effects);
}

void				ASpell::launch(ATarget const &t) const
{
	t.getHitBySpell(*this);
}
