/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncInstruction.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:43 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 17:02:57 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IncInstruction.hpp"
#include "Mindopen.hpp"

IncInstruction::IncInstruction(void)
{
}

IncInstruction::IncInstruction(IncInstruction const &src)
{
	(void)src;
}

void		IncInstruction::execute(Mindopen &mind) const
{
	mind.buff[mind.buff_ptr]++;
}

IncInstruction::~IncInstruction(void)
{
}
