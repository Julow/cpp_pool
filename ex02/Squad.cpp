/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 17:07:08 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 17:28:36 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <cstdlib>

Squad::Squad(void)
{
}

Squad::Squad(Squad const &src)
{
	*this = src;
}

Squad::~Squad(void)
{
}

int				Squad::getCount(void) const
{
	// TODO
	return (0);
}

ISpaceMarine	*Squad::getUnit(int)
{
	// TODO
	return (NULL);
}

int				Squad::push(ISpaceMarine *marine)
{
	// TODO
	(void)marine;
	return (0);
}

Squad			&Squad::operator=(Squad const &rhs)
{
	// *this = rhs;
	(void)rhs;
	return (*this);
}
