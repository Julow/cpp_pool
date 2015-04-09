/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:24:47 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 16:41:50 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <cstdlib>

int				main(void)
{
	FragTrap		frag("ROBO");
	ScavTrap		scav("LOOL");
	NinjaTrap		ninja("NO NAME");
	SuperTrap		super("MEGA");

	srand(time(NULL));
	frag.rangedAttack("Lol");
	frag.meleeAttack("Lol");
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.takeAttack(8);
	frag.beRepaired(50);
	frag.beRepaired(50);
	frag.vaulthunter_dot_exe("Lol");
	frag.vaulthunter_dot_exe("Lol");
	frag.vaulthunter_dot_exe("Lol");
	frag.vaulthunter_dot_exe("Lol");
	scav.rangedAttack("Lol");
	scav.meleeAttack("Lol");
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.takeAttack(8);
	scav.beRepaired(50);
	scav.beRepaired(50);
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	ninja.rangedAttack("Lol");
	ninja.meleeAttack("Lol");
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.takeAttack(8);
	ninja.beRepaired(50);
	ninja.beRepaired(50);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);
	super.rangedAttack("Lol");
	super.meleeAttack("Lol");
	super.takeAttack(8);
	super.takeAttack(8);
	super.takeAttack(8);
	super.takeAttack(8);
	super.takeAttack(8);
	super.takeAttack(8);
	super.takeAttack(8);
	super.takeAttack(8);
	super.takeAttack(8);
	super.takeAttack(8);
	super.takeAttack(8);
	super.takeAttack(8);
	super.takeAttack(8);
	super.beRepaired(50);
	super.beRepaired(50);
	super.vaulthunter_dot_exe("tamer");
	super.vaulthunter_dot_exe("tamer");
	super.vaulthunter_dot_exe("tamer");
	super.vaulthunter_dot_exe("tamer");
	super.vaulthunter_dot_exe("tamer");
	super.vaulthunter_dot_exe("tamer");
	super.vaulthunter_dot_exe("tamer");
	super.ninjaShoebox(frag);
	super.ninjaShoebox(scav);
	super.ninjaShoebox(ninja);
	return (0);
}
