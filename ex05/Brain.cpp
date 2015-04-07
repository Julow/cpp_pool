/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 13:43:21 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 14:09:37 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
	: _iq(120)
{
}

Brain::~Brain(void)
{
}

std::string		Brain::identify(void) const
{
	std::stringstream	str;

	str << (void*)this;
	return (str.str());
}

int				Brain::getIq(void) const
{
	return (_iq);
}
