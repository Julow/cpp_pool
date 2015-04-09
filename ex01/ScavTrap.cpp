/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:25:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 15:36:16 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

const char			*g_challs[] = {
	"Kill them all",
	"Report wide-aze",
	"Destroy a session",
	"Scroll with this mouse",
	"Debug the intra",
	NULL
};

ScavTrap::ScavTrap(std::string const &name)
	: _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
	_maxEnergyPoints(50), _level(1), _meleeDamage(20), _rangedDamage(15),
	_armorReduction(3)
{
	std::cout << "Constructor lol!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "Copy" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "AUTO DESTRUCTION" << std::endl;
}

void				ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "ScavTrap " << _name << " attacks " << target << " at range, causing " << _rangedDamage << " points of damage !" << std::endl;
}

void				ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << " at melee, causing " << _meleeDamage << " points of damage !" << std::endl;
}

int					ScavTrap::takeAttack(unsigned int amount)
{
	amount = (amount > _armorReduction) ? amount - _armorReduction : 0;
	if (amount > _hitPoints)
		amount = _hitPoints;
	_hitPoints -= amount;
	if (_hitPoints == 0)
		std::cout << "ScavTrap: Die" << std::endl;
	else
		std::cout << "Loose " << amount << " hit points" << std::endl;
	return (amount);
}

void				ScavTrap::beRepaired(unsigned int amount)
{
	if ((_maxHitPoints - _hitPoints) < amount)
		amount = _maxHitPoints - _hitPoints;
	_hitPoints += amount;
	std::cout << "Repaired " << amount << " Hit points" << std::endl;
}

void				ScavTrap::challengeNewcomer(void)
{
	std::cout << g_challs[rand() % 5] << std::endl;
}

ScavTrap			&ScavTrap::operator=(ScavTrap const &rhs)
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
