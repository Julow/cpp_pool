/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:24:47 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 15:23:12 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int				main(void)
{
	FragTrap		frag("ROBO");
	ScavTrap		scav("LOOL");

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
	scav.vaulthunter_dot_exe("Lol");
	scav.vaulthunter_dot_exe("Lol");
	scav.vaulthunter_dot_exe("Lol");
	scav.vaulthunter_dot_exe("Lol");
	return (0);
}
