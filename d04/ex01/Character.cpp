/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:38:40 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 16:58:29 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const &name)
	: _name(name), _weapon(NULL), _ap(MAX_AP)
{
}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character(void)
{
}

void				Character::recoverAP(void)
{
	_ap += 10;
	if (_ap > MAX_AP)
		_ap = MAX_AP;
}

void				Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void				Character::attack(Enemy *enemy)
{
	if (_weapon == NULL)
		std::cout << "No weapon, Can't attack" << std::endl;
	else if (enemy == NULL)
		std::cout << "Nothing to attack" << std::endl;
	else if (_ap < _weapon->getAPCost())
		std::cout << "Not enougth AP" << std::endl;
	else
	{
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
		_ap -= _weapon->getAPCost();
	}
}

std::string const	&Character::getName(void) const
{
	return (_name);
}

AWeapon				*Character::getWeapon(void) const
{
	return (_weapon);
}

int					Character::getAP(void) const
{
	return (_ap);
}

Character			&Character::operator=(Character const &rhs)
{
	_name = rhs.getName();
	_ap = rhs.getAP();
	_weapon = rhs.getWeapon();
	return (*this);
}

std::ostream			&operator<<(std::ostream &o, Character const &c)
{
	if (c.getWeapon() == NULL)
		o << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
	else
		o << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	return (o);
}
