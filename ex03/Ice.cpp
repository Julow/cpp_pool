/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 10:45:32 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/11 11:46:46 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void)
	: AMateria("ice")
{
}

Ice::Ice(Ice const &src)
	: AMateria(src)
{
}

Ice::~Ice(void)
{
}

AMateria		*Ice::clone(void) const
{
	return (new Ice(*this));
}

void			Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

Ice				&Ice::operator=(Ice const &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}
