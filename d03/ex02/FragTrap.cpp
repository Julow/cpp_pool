/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:25:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 15:58:45 by jaguillo         ###   ########.fr       */
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
	: ClapTrap(name)
{
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_meleeDamage = 30;
	this->_rangedDamage = 20;
	this->_armorReduction = 5;
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
	: ClapTrap(src._name)
{
	std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Did you scratch the paint?" << std::endl;
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
	ClapTrap::operator=(rhs);
	return (*this);
}
