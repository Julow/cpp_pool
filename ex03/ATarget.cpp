/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:21:21 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:49:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"
#include <iostream>

ATarget::ATarget(std::string const &t)
	: type(t)
{
}

ATarget::~ATarget(void)
{
}

std::string const	&ATarget::getType(void) const
{
	return (type);
}

void				ATarget::getHitBySpell(ASpell const &s) const
{
	std::cout << type << " has been " << s.getEffects() << " !" << std::endl;
}
