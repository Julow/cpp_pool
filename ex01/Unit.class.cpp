/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unit.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 18:36:07 by exam              #+#    #+#             */
/*   Updated: 2015/04/10 19:46:37 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Unit.class.hpp"
#include <string>

Unit::Unit(void)
	: _index(++Unit::index), _type("Unit"), _x(0), _y(0), _damage(0), _hp(0), _maxHp(0), _die(false)
{
	print_created();
}

Unit::Unit(std::string const &type, int x, int y, int damage, int hp, int maxHp)
	: _index(++Unit::index), _type(type), _x(x), _y(y), _damage(damage), _hp(hp), _maxHp(maxHp), _die(false)
{
	print_created();
}

Unit::Unit(Unit const &src)
{
	*this = src;
	_index = ++Unit::index;
	print_created();
}

Unit::~Unit(void)
{
	std::cout << "[DESTRUCTED] Unit #" << _index << ": " << _type << " in " << _x;
	std::cout << '/' << _y << " with " << _hp << '/' << _maxHp << "HP damaging at " << _damage;
	std::cout << '.' << std::endl;
}

void		Unit::move(int x, int y)
{
	if (_die)
		return ;
	std::cout << "Unit #" << _index << " (" << _type << ") is moving from " << _x << '/' << _y;
	std::cout << " to " << x << '/' << y << '.' << std::endl;	
	_x = x;
	_y = y;
}

void		Unit::attack(Unit &target) const
{
	if (_die)
		return ;
	std::cout << "Unit #" << _index << " (" << _type << ") damaged unit #" << target.getIndex();
	std::cout << " (" << target.getType() << ")." << std::endl;
	target -= _damage;
}

void		Unit::die(void)
{
	_hp = 0;
	_die = true;
	std::cout << "Unit #" << _index << " (" << _type << ") died." << std::endl;
}

int			Unit::getIndex(void) const
{
	return (_index);
}

std::string const	&Unit::getType(void) const
{
	return (_type);
}

int			Unit::getX(void) const
{
	return (_x);
}

int			Unit::getY(void) const
{
	return (_y);
}

int			Unit::getDam(void) const
{
	return (_damage);
}

int			Unit::getCHP(void) const
{
	return (_hp);
}

int			Unit::getMHP(void) const
{
	return (_maxHp);
}

int			Unit::index = -1;

Unit		&Unit::operator+=(int n)
{
	_hp += n;
	if (_hp <= 0)
		die();
	else if (_hp > _maxHp)
		_hp = _maxHp;
	return (*this);
}

Unit		&Unit::operator-=(int n)
{
	_hp -= n;
	if (_hp <= 0)
		die();
	else if (_hp > _maxHp)
		_hp = _maxHp;
	return (*this);
}

Unit		&Unit::operator=(Unit const &rhs)
{
	_type = rhs._type;
	_x = rhs._x;
	_y = rhs._y;
	_damage = rhs._damage;
	_hp = rhs._hp;
	_maxHp = rhs._maxHp;
	_die = rhs._die;
	return (*this);
}

void		Unit::print_created(void) const
{
	std::cout << "[CREATED] Unit #" << _index << ": " << _type << " in ";
	    std::cout << _x << "/" << _y << " with " << _hp << "/" << _maxHp << "HP damaging at";
		    std::cout << " " << _damage << '.' << std::endl;
}

std::ostream    &operator<<(std::ostream &o, Unit const &u)
{   
    std::cout << "Unit #" << u.getIndex() << ": " << u.getType() << " in " << u.getX() << '/' << u.getY() << " with ";
    std::cout << u.getCHP() << '/' << u.getMHP() << "HP damaging at " << u.getDam() << '.';
    return (o);
}

