/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 13:28:32 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/15 13:50:06 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T >
void			test(T *c)
{
	std::cout << *c << ';';
}

int				main(void)
{
	char const		lol[] = "Char array";
	int const		mdr[] = {42, 42, 0, -1, 50, 80654, 42};

	iter(lol, 10, &test);
	std::cout << std::endl;
	iter(mdr, 7, &test);
	std::cout << std::endl;
	return (0);
}
