/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 12:08:22 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 12:44:59 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <cstdlib>

static void		test(unsigned int span_n, int len)
{
	Span			span(span_n);

	std::cout << "TEST :: span of " << span_n << " with " << len << " elements" << std::endl;
	try
	{
		while (len-- > 0)
			span.addNumber(rand());
		std::cout << "shortestSpan: " << span.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << span.longestSpan() << std::endl;
	}
	catch (std::overflow_error &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	catch (std::underflow_error &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

int				main(void)
{
	srand(std::clock());
	test(5, 5);
	test(5, 8);
	test(10000, 0);
	test(10000, 1);
	test(10000, 5);
	test(10000, 10000);
	test(100000, 100000);
	return (0);
}
