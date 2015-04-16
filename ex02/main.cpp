/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 12:48:15 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 14:43:26 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>
#include <cstdlib>

#define COUNT		2500000
// #define LIST

int				main(void)
{
#ifdef LIST
	std::list<int>				stack;
	std::list<int>::iterator	it;

	std::cout << "Using list" << std::endl;
#else
	MutantStack<int>			stack;
	MutantStack<int>::iterator	it;
#endif
	int							i;

	std::srand(std::clock());
	for (i = 0; i < COUNT; ++i)
		stack.push_back(rand());
	for (it = stack.begin(); it != stack.end(); ++it)
		std::cout << *it << std::endl;
	return (0);
}
