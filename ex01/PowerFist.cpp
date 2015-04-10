/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:39:09 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 17:03:34 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist(void)
	: AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &src)
	: AWeapon(src)
{
}

PowerFist::~PowerFist(void)
{
}

void				PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist			&PowerFist::operator=(PowerFist const &rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}
