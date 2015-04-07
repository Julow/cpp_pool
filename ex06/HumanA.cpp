/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 14:48:54 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 15:18:51 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(char const *name, Weapon &weapon)
	: _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void			HumanA::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
