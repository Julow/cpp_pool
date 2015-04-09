/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:25:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 15:58:40 by jaguillo         ###   ########.fr       */
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
	: ClapTrap(name)
{
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeDamage = 20;
	this->_rangedDamage = 15;
	this->_armorReduction = 3;
	std::cout << "Constructor lol!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
	: ClapTrap(src._name)
{
	std::cout << "Copy" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "AUTO DESTRUCTION" << std::endl;
}

void				ScavTrap::challengeNewcomer(void)
{
	std::cout << g_challs[rand() % 5] << std::endl;
}

ScavTrap			&ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}
