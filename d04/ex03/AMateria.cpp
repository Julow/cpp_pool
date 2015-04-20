/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 10:45:37 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/11 11:45:50 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
	: _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const &src)
	: _type(src.getType())
{
	*this = src;
}

AMateria::~AMateria(void)
{
}

std::string const	&AMateria::getType(void) const
{
	return (_type);
}

unsigned int		AMateria::getXp(void) const
{
	return (_xp);
}

void				AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}

AMateria			&AMateria::operator=(AMateria const &rhs)
{
	_xp = rhs.getXp();
	return (*this);
}
