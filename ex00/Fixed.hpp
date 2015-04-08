/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 14:35:20 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/08 14:53:53 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define FRACT_PART		8

class	Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	int				getRawBits(void) const;
	void			setRawBits(int n);

	int				getFractPart(void) const;

	Fixed			&operator=(Fixed const &rhs);

private:
	int				_n;
	const int		_fract;
};

#endif
