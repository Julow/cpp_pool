/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LittleKid.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:31:17 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:43:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LittleKid.hpp"

LittleKid::LittleKid(void)
	: ATarget("Little Kid")
{
}

LittleKid::~LittleKid(void)
{
}

ATarget				*LittleKid::clone(void) const
{
	return (new LittleKid());
}
