/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 12:48:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 13:38:13 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>

void			invasion(int n)
{
	ZombieHorde		horde(n);

	horde.announce();
}

int				main(void)
{
	srand(time(NULL));
	invasion(5);
	invasion(3);
	invasion(8);
	return (0);
}
