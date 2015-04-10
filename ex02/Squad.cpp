/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 17:07:08 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 23:32:10 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <cstdlib>

Squad::Squad(void)
	: _count(0), _units(NULL)
{
}

Squad::Squad(Squad const &src)
{
	*this = src;
}

Squad::~Squad(void)
{
	_destroy();
}

int				Squad::getCount(void) const
{
	return (_count);
}

ISpaceMarine	*Squad::getUnit(int i)
{
	if (i < 0 || i >= _count)
		return (NULL);
	return (_units[i]);
}

int				Squad::push(ISpaceMarine *marine)
{
	ISpaceMarine	**tmp;
	int				i;

	tmp = new ISpaceMarine*[_count + 1];
	for (i = 0; i < _count; i++)
		tmp[i] = _units[i];
	tmp[i] = marine->clone();
	delete [] _units;
	_units = tmp;
	_count++;
	return (_count);
}

void			Squad::_destroy(void)
{
	int				i;

	for (i = 0; i < _count; i++)
	{
		if (_units[i] != NULL)
			delete _units[i];
	}
	if (_units != NULL)
		delete [] _units;
}

Squad			&Squad::operator=(Squad const &rhs)
{
	int				i;

	_destroy();
	_units = new ISpaceMarine*[rhs._count];
	_count = rhs._count;
	for (i = 0; i < _count; i++)
		_units[i] = rhs._units[i]->clone();
	return (*this);
}
