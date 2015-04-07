/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 17:51:14 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 18:26:36 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

int				main(int argc, char **argv)
{
	Cat				cat;
	int				i;

	for (i = 1; i < argc; i++)
		cat.read(argv[i]);
	if (i <= 1)
		cat.read("-");
	return (0);
}
