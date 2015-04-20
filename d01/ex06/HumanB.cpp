/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 14:49:03 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 15:27:38 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(char const *name)
	: _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void			HumanB::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void			HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
