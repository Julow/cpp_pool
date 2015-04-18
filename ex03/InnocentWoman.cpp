/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InnocentWoman.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:31:17 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 20:00:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InnocentWoman.hpp"

InnocentWoman::InnocentWoman(void)
	: ATarget("Innocent Young Woman")
{
}

InnocentWoman::~InnocentWoman(void)
{
}

ATarget				*InnocentWoman::clone(void) const
{
	return (new InnocentWoman());
}
