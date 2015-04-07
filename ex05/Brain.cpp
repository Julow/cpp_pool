/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 13:43:21 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 14:00:22 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
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
