/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 13:40:47 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/06 13:54:49 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

static void		print_upper(const char *str)
{
	while (*str != '\0')
		std::cout << (char)toupper(*(str++));
}

int				main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (*(++argv) != NULL)
		print_upper(*argv);
	std::cout << std::endl;
	return (0);
}
