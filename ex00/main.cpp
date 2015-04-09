/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:24:47 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 15:37:54 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>

int				main(void)
{
	FragTrap		frag("ROBO");

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
	return (0);
}
