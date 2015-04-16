/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 12:08:28 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 12:47:02 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n)
	: _vector(), _n(n)
{
}

void			Span::addNumber(int num) throw(std::overflow_error)
{
	if (_vector.size() >= _n)
		throw std::overflow_error("Too many numbers");
	_vector.push_back(num);
}

int				Span::shortestSpan(void) const throw(std::underflow_error)
{
	std::vector<int>::const_iterator	it;
	int									min;

	if (_vector.size() <= 1)
		throw std::underflow_error("Not enougth numbers");
	it = _vector.begin();
	min = *it;
	for (++it; it != _vector.end(); ++it)
	{
		if (*it < min)
			min = *it;
	}
	return (min);
}

int				Span::longestSpan(void) const throw(std::underflow_error)
{
	std::vector<int>::const_iterator	it;
	int									max;

	if (_vector.size() <= 1)
		throw std::underflow_error("Not enougth numbers");
	it = _vector.begin();
	max = *it;
	for (++it; it != _vector.end(); ++it)
	{
		if (*it > max)
			max = *it;
	}
	return (max);
}

Span::~Span(void)
{
}
