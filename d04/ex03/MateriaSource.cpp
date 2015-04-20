/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 10:45:12 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/11 11:45:04 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	_mats[0] = NULL;
	_mats[1] = NULL;
	_mats[2] = NULL;
	_mats[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	_mats[0] = NULL;
	_mats[1] = NULL;
	_mats[2] = NULL;
	_mats[3] = NULL;
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
}

void					MateriaSource::learnMateria(AMateria *m)
{
	int						i;

	for (i = 0; i < 4; i++)
	{
		if (_mats[i] == NULL)
		{
			_mats[i] = m;
			return ;
		}
	}
}

AMateria				*MateriaSource::createMateria(std::string const &type)
{
	int						i;

	if (type == "ice")
		return (new Ice());
	if (type == "cure")
		return (new Cure());
	for (i = 0; i < 4; i++)
	{
		if (_mats[i] != NULL && _mats[i]->getType() == type)
			return (_mats[i]->clone());
	}
	return (NULL);
}

MateriaSource			&MateriaSource::operator=(MateriaSource const &rhs)
{
	int						i;

	for (i = 0; i < 4; i++)
		_mats[i] = rhs._mats[i];
	return (*this);
}
