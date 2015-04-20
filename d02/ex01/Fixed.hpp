/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 14:35:20 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/08 15:11:47 by jaguillo         ###   ########.fr       */
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

	int				getRawBits(void) const;
	void			setRawBits(int n);

	int				getFractPart(void) const;

	float			toFloat(void) const;
	int				toInt(void) const;

	Fixed			&operator=(Fixed const &rhs);

private:
	int				_n;
	const int		_fract;
};

std::ostream		&operator<<(std::ostream &o, Fixed const &rhs);

#endif
