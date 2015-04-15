/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 13:55:16 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/15 14:22:54 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int				main(void)
{
	Array<int>		test1;
	Array<int>		test2(5);
	Array<int>		test3(test2);

	std::cout << "1: " << test1 << std::endl;
	test2[2] = 5;
	std::cout << "2: " << test2 << std::endl;
	std::cout << "3: " << test3 << std::endl;
	test1 = test2;
	try
	{
		test1[8] = 5;
	}
	catch (std::exception &c)
	{
		std::cout << c.what() << std::endl;;
	}
	test3 = test2;
	test2[1] = 999999;
	test2[3] = 9999;
	test1[3] = test2[3];
	std::cout << "1: " << test1 << std::endl;
	std::cout << "2: " << test2 << std::endl;
	std::cout << "3: " << test3 << std::endl;
	return (0);
}
