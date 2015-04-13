/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Marine.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 19:49:08 by exam              #+#    #+#             */
/*   Updated: 2015/04/10 20:10:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Marine.class.hpp"

Marine::Marine(void)
	: Unit("Marine", 0, 0, 6, 40, 40)
{
	std::cout << "Unit #" << _index << ": You want a piece of me, boy ?" << std::endl;
}

Marine::Marine(int x, int y)
	: Unit("Marine", x, y, 6, 40, 40)
{
	std::cout << "Unit #" << _index << ": You want a piece of me, boy ?" << std::endl;
}

Marine::Marine(Marine const &src)
	: Unit(src)
{
	std::cout << "Unit #" << _index << ": You want a piece of me, boy ?" << std::endl;
}

Marine::~Marine(void)
{
}

void			Marine::die(void)
{
	Unit::die();
	std::cout << "Unit #" << _index << ": Aaaargh..." << std::endl;
}

void			Marine::move(int x, int y)
{
	Unit::move(x, y);
	std::cout << "Unit #" << _index << ": Rock'n'roll !!!" << std::endl;
}

void			Marine::stimpack(void)
{
	if (_hp < 11)
		return ;
	_damage *= 2;
	_hp -= 10;
	std::cout << "Unit #" << _index << ": Ho yeah..." << std::endl;
}

Marine			&Marine::operator=(Marine const &rhs)
{
	Unit::operator=(rhs);
	return (*this);
}
