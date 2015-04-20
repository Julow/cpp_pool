/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecInstruction.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:43 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 16:00:08 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DecInstruction.hpp"
#include "Mindopen.hpp"

DecInstruction::DecInstruction(void)
{
}

DecInstruction::DecInstruction(DecInstruction const &src)
{
	(void)src;
}

void		DecInstruction::execute(Mindopen &mind) const
{
	mind.buff[mind.buff_ptr]--;
}

DecInstruction::~DecInstruction(void)
{
}
