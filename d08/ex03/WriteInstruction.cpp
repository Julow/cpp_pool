/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteInstruction.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:43 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 16:19:05 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WriteInstruction.hpp"
#include "Mindopen.hpp"
#include <iostream>

WriteInstruction::WriteInstruction(void)
{
}

WriteInstruction::WriteInstruction(WriteInstruction const &src)
{
	(void)src;
}

void		WriteInstruction::execute(Mindopen &mind) const
{
	std::cout << mind.buff[mind.buff_ptr];
}

WriteInstruction::~WriteInstruction(void)
{
}
