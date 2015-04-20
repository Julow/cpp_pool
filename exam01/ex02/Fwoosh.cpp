/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:24:49 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:42:59 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void)
	: ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::~Fwoosh(void)
{
}

ASpell				*Fwoosh::clone(void) const
{
	return (new Fwoosh());
}
