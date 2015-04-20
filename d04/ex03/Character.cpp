/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 10:45:19 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/11 11:59:45 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
	: _name(name)
{
	_mats[0] = NULL;
	_mats[1] = NULL;
	_mats[2] = NULL;
	_mats[3] = NULL;
}

Character::Character(Character const &src)
	: _name(src.getName())
{
	_mats[0] = NULL;
	_mats[1] = NULL;
	_mats[2] = NULL;
	_mats[3] = NULL;
	*this = src;
}

Character::~Character(void)
{
	_destroy();
}

std::string	const	&Character::getName(void) const
{
	return (_name);
}

void				Character::equip(AMateria *m)
{
	int					i;

	for (i = 0; i < 4; i++)
	{
		if (_mats[i] == NULL)
		{
			_mats[i] = m;
			return ;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	_mats[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || _mats[idx] == NULL)
		return ;
	_mats[idx]->use(target);
}

void				Character::_destroy(void)
{
	int					i;

	for (i = 0; i < 4; i++)
	{
		if (_mats[i] != NULL)
		{
			delete _mats[i];
			_mats[i] = NULL;
		}
	}
}

Character			&Character::operator=(Character const &rhs)
{
	int					i;

	_name = rhs._name;
	_destroy();
	for (i = 0; i < 4; i++)
		_mats[i] = rhs._mats[i];
	return (*this);
}
