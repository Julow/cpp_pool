/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LeftInstruction.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:43 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 16:00:03 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LeftInstruction.hpp"
#include "Mindopen.hpp"

LeftInstruction::LeftInstruction(void)
{
}

LeftInstruction::LeftInstruction(LeftInstruction const &src)
{
	(void)src;
}

void		LeftInstruction::execute(Mindopen &mind) const
{
	if (mind.buff_ptr <= 0)
		mind.buff_ptr = BUFF_SIZE;
	mind.buff_ptr--;
}

LeftInstruction::~LeftInstruction(void)
{
}
