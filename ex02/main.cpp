/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/14 18:22:36 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/14 18:43:29 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base			*generate(void)
{
	int				r;

	r = rand() % 3;
	if (r == 0)
		return (new A());
	if (r == 1)
		return (new B());
	return (new C());
}

void			identify_from_pointer(Base *p)
{
	std::cout << "From pointer: ";
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void			identify_from_reference(Base &p)
{
	std::cout << "From reference: ";
	try
	{
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		try
		{
			static_cast<void>(dynamic_cast<B&>(p));
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &e)
		{
			try
			{
				static_cast<void>(dynamic_cast<C&>(p));
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast &e)
			{
			}
		}
	}
}

int				main(void)
{
	Base			*lol;

	srand(std::clock());
	lol = generate();
	identify_from_pointer(lol);
	identify_from_reference(*lol);
	delete lol;
	return (0);
}
