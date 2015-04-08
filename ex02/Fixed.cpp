/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 14:35:13 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/08 19:34:35 by jaguillo         ###   ########.fr       */
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
}

Fixed::Fixed(int n)
	: _fract(FRACT_PART)
{
	_n = n << _fract;
}

Fixed::Fixed(float n)
	: _fract(FRACT_PART)
{
	_n = roundf(n * (1 << _fract));
}

Fixed::Fixed(Fixed const &src)
	: _fract(src._fract)
{
	*this = src;
}

Fixed::~Fixed(void)
{
}

/*
** get/set
*/
int				Fixed::getRawBits(void) const
{
	return (_n);
}

void			Fixed::setRawBits(int n)
{
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
	float			f;

	f = _n;
	return (f / (1 << _fract));
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
	_n = rhs._n;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed			Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed			Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed			Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed			Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed			&Fixed::operator++(void)
{
	++_n;
	return (*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed			f(*this);

	_n++;
	return (f);
}

Fixed			&Fixed::operator--(void)
{
	--_n;
	return (*this);
}

Fixed			Fixed::operator--(int)
{
	Fixed			f(*this);

	_n--;
	return (f);
}

bool			Fixed::operator>(Fixed const &rhs) const
{
	if (_n > rhs._n)
		return (true);
	return (false);
}

bool			Fixed::operator<(Fixed const &rhs) const
{
	if (_n < rhs._n)
		return (true);
	return (false);
}

bool			Fixed::operator>=(Fixed const &rhs) const
{
	if (_n >= rhs._n)
		return (true);
	return (false);
}

bool			Fixed::operator<=(Fixed const &rhs) const
{
	if (_n <= rhs._n)
		return (true);
	return (false);
}

bool			Fixed::operator==(Fixed const &rhs) const
{
	if (_n == rhs._n)
		return (true);
	return (false);
}

bool			Fixed::operator!=(Fixed const &rhs) const
{
	if (_n != rhs._n)
		return (true);
	return (false);
}

/*
** Statics
*/
Fixed			&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed		&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed			&Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

const Fixed		&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (b);
	return (a);
}
