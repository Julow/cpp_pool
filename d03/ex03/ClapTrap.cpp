/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 15:40:11 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 16:51:30 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name)
	: _name(name), _hitPoints(100), _maxHitPoints(100),
	_energyPoints(0), _maxEnergyPoints(0), _level(1), _meleeDamage(0),
	_rangedDamage(0), _armorReduction(0)
{
	std::cout << "ClapTrap construction" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destruction" << std::endl;
}

void				ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << " at range, causing " << _rangedDamage << " points of damage !" << std::endl;
}

void				ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << " at melee, causing " << _meleeDamage << " points of damage !" << std::endl;
}

int					ClapTrap::takeAttack(unsigned int amount)
{
	amount = (amount > _armorReduction) ? amount - _armorReduction : 0;
	if (amount > _hitPoints)
		amount = _hitPoints;
	_hitPoints -= amount;
	if (_hitPoints == 0)
		std::cout << "ClapTrap: Die" << std::endl;
	else
		std::cout << "Loose " << amount << " hit points" << std::endl;
	return (amount);
}

void				ClapTrap::beRepaired(unsigned int amount)
{
	if ((_maxHitPoints - _hitPoints) < amount)
		amount = _maxHitPoints - _hitPoints;
	_hitPoints += amount;
	std::cout << "Repaired " << amount << " Hit points" << std::endl;
}

ClapTrap			&ClapTrap::operator=(ClapTrap const &rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_maxHitPoints = rhs._maxHitPoints;
	_energyPoints = rhs._energyPoints;
	_maxEnergyPoints = rhs._maxEnergyPoints;
	_level = rhs._level;
	_meleeDamage = rhs._meleeDamage;
	_rangedDamage = rhs._rangedDamage;
	_armorReduction = rhs._armorReduction;
	return (*this);
}
