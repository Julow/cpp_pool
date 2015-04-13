/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 14:14:46 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 19:00:51 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include <iostream>
#include <cstdlib>

static void		test(int signerGrade, int executorGrade, std::string const &name, std::string const &target)
{
	try
	{
		Intern			intern;
		Bureaucrat		signer("signer", signerGrade);
		Bureaucrat		executor("executor", executorGrade);
		OfficeBlock		office;

		office.setIntern(&intern);
		office.setSigner(&signer);
		office.setExecutor(&executor);
		office.doBureaucracy(name, target);
	}
	catch (OfficeBlock::IncompleteOfficeException &c)
	{
		std::cout << c.what() << std::endl;
	}
	catch (Intern::InternFiredException &c)
	{
		std::cout << c.what() << std::endl;
	}
	catch (Form::GradeTooLowException &c)
	{
		std::cout << c.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &c)
	{
		std::cout << c.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &c)
	{
		std::cout << c.what() << std::endl;
	}
}

int				main(void)
{
	test(5, 10, "robotomy request", "lol");
	test(150, 10, "robotomy request", "lol");
	test(1, 100, "robotomy request", "lol");
	test(1, 10, "presidential pardon", "lol");
	test(1, 10, "shrubbery creation", "lol");
	test(1, 10, "mdr lol", "lol");
	test(1, -1, "mdr lol", "lol");
	test(1, 151, "mdr lol", "lol");
	return (0);
}
