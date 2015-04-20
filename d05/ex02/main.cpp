/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 14:14:46 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 18:04:31 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>

int				main(void)
{
	Bureaucrat				bob("bob", 150);
	Bureaucrat				roger("roger", 4);
	ShrubberyCreationForm	shrubbery("test");
	RobotomyRequestForm		robotomy("test");
	PresidentialPardonForm	pardon("test");

	srand(time(NULL));
	bob.signForm(shrubbery);
	bob.executeForm(shrubbery);
	roger.signForm(shrubbery);
	roger.executeForm(shrubbery);
	bob.signForm(robotomy);
	bob.executeForm(robotomy);
	roger.signForm(robotomy);
	roger.executeForm(robotomy);
	bob.signForm(pardon);
	bob.executeForm(pardon);
	roger.signForm(pardon);
	roger.executeForm(pardon);
	return (0);
}
