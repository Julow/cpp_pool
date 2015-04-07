/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 12:12:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 12:59:44 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <cstdlib>
# include "Zombie.hpp"

class	ZombieEvent
{
public:
	ZombieEvent(void);
	~ZombieEvent(void);

	void			setZombieType(std::string const &name);

	Zombie			*newZombie(std::string const &name);

	void			randomChump(void);

private:
	std::string		_type;
};

#endif
