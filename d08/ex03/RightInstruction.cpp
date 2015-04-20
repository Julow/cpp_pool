/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RightInstruction.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:43 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 15:59:59 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RightInstruction.hpp"
#include "Mindopen.hpp"

RightInstruction::RightInstruction(void)
{
}

RightInstruction::RightInstruction(RightInstruction const &src)
{
	(void)src;
}

void		RightInstruction::execute(Mindopen &mind) const
{
	mind.buff_ptr++;
	if (mind.buff_ptr >= BUFF_SIZE)
		mind.buff_ptr = 0;
}

RightInstruction::~RightInstruction(void)
{
}
