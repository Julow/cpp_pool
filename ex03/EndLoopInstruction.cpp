/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EndLoopInstruction.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:43 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 17:02:33 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LoopInstruction.hpp"
#include "EndLoopInstruction.hpp"
#include "Mindopen.hpp"

EndLoopInstruction::EndLoopInstruction(void)
{
}

EndLoopInstruction::EndLoopInstruction(EndLoopInstruction const &src)
{
	(void)src;
}

void		EndLoopInstruction::execute(Mindopen &mind) const
{
	int			lvl;

	if (mind.buff[mind.buff_ptr] != 0)
	{
		lvl = 0;
		while (mind.it != mind.getQueue().begin())
		{
			if (dynamic_cast<EndLoopInstruction*>(*(mind.it)) != NULL)
				lvl++;
			else if (dynamic_cast<LoopInstruction*>(*(mind.it)) != NULL)
			{
				lvl--;
				if (lvl == 0)
					break ;
			}
			--mind.it;
		}
	}
}

EndLoopInstruction::~EndLoopInstruction(void)
{
}
