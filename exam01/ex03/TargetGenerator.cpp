/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 20:29:38 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 20:36:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{
}

TargetGenerator::~TargetGenerator(void)
{
}

void				TargetGenerator::learnTargetType(ATarget *t)
{
	if (t == NULL)
		return ;
	_targets[t->getType()] = t;
}

void				TargetGenerator::forgetTargetType(std::string const &t)
{
	_targets.erase(t);
}

ATarget				*TargetGenerator::createTarget(std::string const &t)
{
	if (_targets[t] == NULL)
		return (NULL);
	return (_targets[t]->clone());
}
