/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 15:29:52 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 16:17:06 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Replace.hpp"

static void		repl(char const *file, char const *s1, char const *s2)
{
	std::string		file_name(file);
	Replace			rep(file_name);

	rep.start(s1, s2);
}

int				main(int argc, char **argv)
{
	if (argc <= 3)
		return (std::cout << argv[0] << ": 3 argments needed" << std::endl, 1);
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
		return (std::cout << argv[0] << ": s1 and s2 cannot be empty" << std::endl, 1);
	repl(argv[1], argv[2], argv[3]);
	return (0);
}
