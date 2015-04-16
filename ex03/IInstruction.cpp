/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IInstruction.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:14:21 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 16:16:44 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IInstruction.hpp"

IInstruction::IInstruction(void)
{
}

IInstruction::IInstruction(IInstruction const &src)
{
	(void)src;
}

void				IInstruction::execute(Mindopen &mind) const
{
	(void)mind;
}

IInstruction::~IInstruction(void)
{
}

IInstruction		&IInstruction::operator=(IInstruction const &rhs)
{
	(void)rhs;
	return (*this);
}
