/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 16:00:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 16:18:59 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const &name)
	: ClapTrap(name)
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 5;
	this->_armorReduction = 0;
	std::cout << "APPARITION" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
	: ClapTrap(src._name)
{
	std::cout << "DUPPLICATION" << std::endl;
	*this = src;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "DISPARITION" << std::endl;
}

void				NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << "ShoeBoxing a ClapTrap: Repair this shit" << std::endl;
	trap.beRepaired(5);
}

void				NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << "ShoeBoxing a ScavTrap: Want a challenge" << std::endl;
	trap.challengeNewcomer();
}

void				NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << "ShoeBoxing a FragTrap: Launch vaulthunter_dot_exe" << std::endl;
	trap.vaulthunter_dot_exe(_name);
}

void				NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << "ShoeBoxing a NinjaTrap: Kick in the face" << std::endl;
	trap.takeAttack(5);
}

NinjaTrap			&NinjaTrap::operator=(NinjaTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}
