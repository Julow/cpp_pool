/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 12:12:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 12:59:01 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string const &name, std::string const &type)
	: _name(name), _type(type)
{
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void			Zombie::announce(void)
{
	std::cout << '<' << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}
