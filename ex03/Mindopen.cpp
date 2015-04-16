/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mindopen.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 14:56:58 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 17:01:51 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mindopen.hpp"
#include "RightInstruction.hpp"
#include "LeftInstruction.hpp"
#include "IncInstruction.hpp"
#include "DecInstruction.hpp"
#include "WriteInstruction.hpp"
#include "ReadInstruction.hpp"
#include "LoopInstruction.hpp"
#include "EndLoopInstruction.hpp"
#include <cstring>
#include <fstream>
#include <deque>
#include <exception>
#include <iostream>

Mindopen::Mindopen(std::string const &file) throw(std::invalid_argument)
	: buff_ptr(0), _queue()
{
	std::ifstream		f(file);
	char				c;

	if (!f.good())
		throw std::invalid_argument("Connot open file");
	while (!f.eof())
	{
		f >> c;
		_queueInst(c);
	}
	f.close();
	bzero(buff, BUFF_SIZE);
	it = _queue.begin();
	while (it != _queue.end())
	{
		(*it)->execute(*this);
		++it;
	}
}

std::deque<IInstruction*>	&Mindopen::getQueue(void)
{
	return (_queue);
}

void						Mindopen::_queueInst(char c)
{
	int				i;

	for (i = 0; _insts[i].f != NULL; ++i)
	{
		if (c == _insts[i].c)
		{
			(this->*_insts[i].f)();
			break ;
		}
	}
}

void						Mindopen::_queueInstRight(void)
{
	_queue.push_back(new RightInstruction());
}

void						Mindopen::_queueInstLeft(void)
{
	_queue.push_back(new LeftInstruction());
}

void						Mindopen::_queueInstInc(void)
{
	_queue.push_back(new IncInstruction());
}

void						Mindopen::_queueInstDec(void)
{
	_queue.push_back(new DecInstruction());
}

void						Mindopen::_queueInstWrite(void)
{
	_queue.push_back(new WriteInstruction());
}

void						Mindopen::_queueInstRead(void)
{
	_queue.push_back(new ReadInstruction());
}

void						Mindopen::_queueInstLoop(void)
{
	_queue.push_back(new LoopInstruction());
}

void						Mindopen::_queueInstEndLoop(void)
{
	_queue.push_back(new EndLoopInstruction());
}

Mindopen::~Mindopen(void)
{
}

const Mindopen::s_inst		Mindopen::_insts[] = {
	{'>', &Mindopen::_queueInstRight},
	{'<', &Mindopen::_queueInstLeft},
	{'+', &Mindopen::_queueInstInc},
	{'-', &Mindopen::_queueInstDec},
	{'.', &Mindopen::_queueInstWrite},
	{',', &Mindopen::_queueInstRead},
	{'[', &Mindopen::_queueInstLoop},
	{']', &Mindopen::_queueInstEndLoop},
	{'\0', NULL}
};
