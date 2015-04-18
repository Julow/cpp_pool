/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ponymorph.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:24:49 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:59:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ponymorph.hpp"

Ponymorph::Ponymorph(void)
	: ASpell("Ponymorph", "turned into a nice, cute little pony")
{
}

Ponymorph::~Ponymorph(void)
{
}

ASpell				*Ponymorph::clone(void) const
{
	return (new Ponymorph());
}
