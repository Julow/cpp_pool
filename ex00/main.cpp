/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 14:14:46 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 15:40:07 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

static void		test(std::string const &name, int grade, int inc)
{
	try
	{
		std::cout << "Try: Bureaucrat " << name << " with initial grade " << grade << std::endl;
		Bureaucrat	b(name, grade);
		while (inc > 0)
		{
			std::cout << "Try: Bureaucrat " << b.getName() << " ++ (" << b.getGrade() << ")" << std::endl;
			++b;
			std::cout << b;
			inc--;
		}
		while (inc < 0)
		{
			std::cout << "Try: Bureaucrat " << b.getName() << " -- (" << b.getGrade() << ")" << std::endl;
			--b;
			std::cout << b;
			inc++;
		}
		std::cout << b;
	}
	// catch (Bureaucrat::GradeTooHighException &c)
	// {
	// 	std::cout << "KO: Grade Too High" << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException &c)
	// {
	// 	std::cout << "KO: Grade Too Low" << std::endl;
	// }
	catch (std::exception &c)
	{
		std::cout << c.what() << std::endl;
	}
}

int				main(void)
{
	test("bob", 5, 0);
	test("bob", 1, 0);
	test("bob", 150, 0);
	test("bob", 151, 0);
	test("bob", 0, 0);
	test("bob", -5, 0);
	test("bob", 150, 5);
	test("bob", 150, -5);
	test("bob", 1, -5);
	test("bob", 1, 5);
	return (0);
}
