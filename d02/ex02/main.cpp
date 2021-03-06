/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 15:54:32 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/08 19:34:42 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int				main(void)
{
	Fixed			a;
	Fixed const		b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << (Fixed(10) + Fixed(2.555f)) << std::endl;
	std::cout << b << " " << a << " = " << a / b << std::endl;
	std::cout << b << " " << a << " = " << a / Fixed(0.005f) << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	return (0);
}
