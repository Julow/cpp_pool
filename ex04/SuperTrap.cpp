/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 16:36:11 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 16:48:36 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name)
	: ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 20;
	this->_armorReduction = 5;
	std::cout << "SUPER APPARITION" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src)
	: ClapTrap(src._name), NinjaTrap(src._name), FragTrap(src._name)
{
	std::cout << "SUPER DUPPLICATION" << std::endl;
	*this = src;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SUPER DISPARITION" << std::endl;
}

SuperTrap			&SuperTrap::operator=(SuperTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}
