/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:25:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 15:26:43 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

const char		*g_attacks[] = {
	"Loling",
	"BeADick",
	"Blow",
	"Gear",
	"Termcap",
	"Narwal",
	NULL
};

FragTrap::FragTrap(std::string const &name)
	: _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
	_maxEnergyPoints(100), _level(1), _meleeDamage(30), _rangedDamage(20),
	_armorReduction(5)
{
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Did you scratch the paint?" << std::endl;
}

void				FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "I am a tornado of death and bullets!" << std::endl;
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangedDamage << " points of damage !" << std::endl;
}

void				FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "Take that!" << std::endl;
	std::cout << "FR4G-TP " << _name << " attacks " << target;
	std::cout << " at melee, causing " << _meleeDamage << " points of damage !" << std::endl;
}

int					FragTrap::takeAttack(unsigned int amount)
{
	amount = (amount > _armorReduction) ? amount - _armorReduction : 0;
	if (amount > _hitPoints)
		amount = _hitPoints;
	_hitPoints -= amount;
	if (_hitPoints == 0)
		std::cout << "TakeAttack: Die" << std::endl;
	else
		std::cout << "Loose " << amount << " hit points" << std::endl;
	return (amount);
}

void				FragTrap::beRepaired(unsigned int amount)
{
	if ((_maxHitPoints - _hitPoints) < amount)
		amount = _maxHitPoints - _hitPoints;
	_hitPoints += amount;
	std::cout << "Repaired " << amount << " Hit points" << std::endl;
}

void				FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "Can't attack: Out of energy" << std::endl;
		return ;
	}
	_energyPoints -= 25;
	std::cout << "Attack " << target << " with " << g_attacks[rand() % 5] << " attack" << std::endl;
}

FragTrap			&FragTrap::operator=(FragTrap const &rhs)
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
