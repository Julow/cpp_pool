/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 11:39:26 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 12:06:56 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>
#include <iostream>
#include <vector>
#include <list>
#include <map>

int				main(void)
{
	std::vector<int>	vector;
	std::list<int>		list;
	std::map<int, int>	map;
	int					i;

	// Fill containers
	srand(std::clock());
	for (i = 0; i < 100; i++)
	{
		vector.push_back(rand());
		list.push_back(rand());
		map[rand()] = rand();
	}
	vector.push_back(42);
	list.push_back(42);
	map[rand()] = 42;
	for (i = 0; i < 100; i++)
	{
		vector.push_back(rand());
		list.push_back(rand());
		map[rand()] = rand();
	}
	// find
	if (easyfind(vector, 42))
		std::cout << "SUCCESS vector" << std::endl;
	else
		std::cout << "ERROR vector" << std::endl;
	if (easyfind(list, 42))
		std::cout << "SUCCESS list" << std::endl;
	else
		std::cout << "ERROR list" << std::endl;
	if (easyfind(map, 42))
		std::cout << "SUCCESS map" << std::endl;
	else
		std::cout << "ERROR map" << std::endl;
	return (0);
}
