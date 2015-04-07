/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 14:48:16 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 15:21:06 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(char const *type)
	: _type(type)
{
}

Weapon::~Weapon(void)
{
}

std::string const	&Weapon::getType(void) const
{
	return (_type);
}

void				Weapon::setType(std::string const &str)
{
	_type = str;
}
