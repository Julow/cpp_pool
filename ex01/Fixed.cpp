/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 14:35:13 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/08 15:43:16 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/*
** Constructors
*/
Fixed::Fixed(void)
	: _n(0), _fract(FRACT_PART)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n)
	: _fract(FRACT_PART)
{
	_n = n << _fract;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float n)
	: _fract(FRACT_PART)
{
	_n = roundf(n * (1 << _fract));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
	: _fract(src._fract)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*
** get/set
*/
int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_n);
}

void			Fixed::setRawBits(int n)
{
	std::cout << "setRawBits member function called" << std::endl;
	_n = n;
}

int				Fixed::getFractPart(void) const
{
	return (_fract);
}

/*
** Convertion
*/
float			Fixed::toFloat(void) const
{
	return (((float)_n) / (1 << _fract));
}

int				Fixed::toInt(void) const
{
	return (_n >> _fract);
}

/*
** Operators
*/
Fixed			&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	_n = rhs._n;
	return (*this);
}

std::ostream		&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
