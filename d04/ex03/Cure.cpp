/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 10:45:24 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/11 11:43:04 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void)
	: AMateria("cure")
{
}

Cure::Cure(Cure const &src)
	: AMateria(src)
{
}

Cure::~Cure(void)
{
}

AMateria		*Cure::clone(void) const
{
	return (new Cure(*this));
}

void			Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}

Cure			&Cure::operator=(Cure const &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}
