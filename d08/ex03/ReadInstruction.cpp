/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadInstruction.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:43 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 16:00:00 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReadInstruction.hpp"
#include "Mindopen.hpp"
#include <iostream>

ReadInstruction::ReadInstruction(void)
{
}

ReadInstruction::ReadInstruction(ReadInstruction const &src)
{
	(void)src;
}

void		ReadInstruction::execute(Mindopen &mind) const
{
	char		c;

	std::cin >> c;
	mind.buff[mind.buff_ptr] = c;
}

ReadInstruction::~ReadInstruction(void)
{
}
