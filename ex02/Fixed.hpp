/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 14:35:20 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/08 16:18:54 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define FRACT_PART		8

class	Fixed
{
public:
	Fixed(void);
	Fixed(int n);
	Fixed(float n);
	Fixed(Fixed const &src);
	~Fixed(void);

	int					getRawBits(void) const;
	void				setRawBits(int n);

	int					getFractPart(void) const;

	float				toFloat(void) const;
	int					toInt(void) const;

	Fixed				&operator=(Fixed const &rhs);

	Fixed				operator+(Fixed const &rhs) const;
	Fixed				operator-(Fixed const &rhs) const;
	Fixed				operator*(Fixed const &rhs) const;
	Fixed				operator/(Fixed const &rhs) const;

	Fixed				&operator++(void);
	Fixed				operator++(int);
	Fixed				&operator--(void);
	Fixed				operator--(int);

	bool				operator>(Fixed const &rhs) const;
	bool				operator<(Fixed const &rhs) const;
	bool				operator>=(Fixed const &rhs) const;
	bool				operator<=(Fixed const &rhs) const;
	bool				operator==(Fixed const &rhs) const;
	bool				operator!=(Fixed const &rhs) const;

	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(Fixed const &a, Fixed const &b);

	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);

private:
	int					_n;
	const int			_fract;
};

std::ostream			&operator<<(std::ostream &o, Fixed const &rhs);

#endif
