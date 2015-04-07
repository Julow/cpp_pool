/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 13:43:21 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 13:55:26 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
}

Human::~Human(void)
{
}

const Brain		&Human::getBrain(void) const
{
	return (_brain);
}

std::string		Human::identify(void) const
{
	return (_brain.identify());
}
