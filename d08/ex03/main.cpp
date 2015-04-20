/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 14:45:22 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 17:02:48 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mindopen.hpp"
#include <iostream>
#include <exception>

int				main(int argc, char **argv)
{
	try
	{
		if (argc < 2)
			throw std::invalid_argument("Not enougth arguments");
		Mindopen	mind(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
