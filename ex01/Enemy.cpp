/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:38:57 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 16:32:00 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
	: _type(type), _hp(hp)
{
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
}

Enemy::~Enemy(void)
{
}

std::string const	&Enemy::getType(void) const
{
	return (_type);
}

int					Enemy::getHP(void) const
{
	return (_hp);
}

void				Enemy::takeDamage(int damage)
{
	if (damage < 0)
		damage = 0;
	if (damage > _hp)
		damage = _hp;
	_hp -= damage;
}

Enemy			&Enemy::operator=(Enemy const &rhs)
{
	_type = rhs.getType();
	_hp = rhs.getHP();
	return (*this);
}
