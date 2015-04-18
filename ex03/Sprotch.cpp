/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sprotch.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:24:49 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:55:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sprotch.hpp"

Sprotch::Sprotch(void)
	: ASpell("Sprotch", "sprotched")
{
}

Sprotch::~Sprotch(void)
{
}

ASpell				*Sprotch::clone(void) const
{
	return (new Sprotch());
}
