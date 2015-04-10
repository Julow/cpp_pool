/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:39:27 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 15:47:30 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apCost, int damage)
	: _name(name), _apCost(apCost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
}

AWeapon::~AWeapon(void)
{
}

std::string const	&AWeapon::getName(void) const
{
	return (_name);
}

int					AWeapon::getAPCost(void) const
{
	return (_apCost);
}

int					AWeapon::getDamage(void) const
{
	return (_damage);
}

AWeapon				&AWeapon::operator=(AWeapon const &rhs)
{
	_name = rhs.getName();
	_apCost = rhs.getAPCost();
	_damage = rhs.getDamage();
	return (*this);
}
