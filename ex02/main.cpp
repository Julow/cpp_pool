/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 12:12:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 12:42:36 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void			wave(ZombieEvent &event, std::string type, int len)
{
	Zombie			*tmp;

	event.setZombieType(type);
	while (len-- > 0)
	{
		tmp = event.newZombie("LAAAL");
		tmp->announce();
		delete tmp;
	}
}

int				main(void)
{
	ZombieEvent		event;

	srand(time(NULL));
	std::cout << "OMG! FUS ZOMBIES COMMING" << std::endl;
	wave(event, "FUS", 5);
	std::cout << "OMG! RO ZOMBIES COMMING" << std::endl;
	wave(event, "RO", 5);
	std::cout << "OMG! DA ZOMBIES COMMING" << std::endl;
	wave(event, "DA", 5);
	std::cout << "LOL FUCKED UP ZOMBIE" << std::endl;
	event.randomChump();
	event.randomChump();
	event.randomChump();
	event.randomChump();
	event.randomChump();
	event.randomChump();
	return (0);
}
