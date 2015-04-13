/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 14:14:46 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 18:24:06 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>
#include <cstdlib>

int				main(void)
{
	Intern					intern;
	Bureaucrat				bob("bob", 150);
	Bureaucrat				roger("roger", 4);
	Form					*shrubbery = intern.makeForm("robotomy request", "test");
	Form					*robotomy = intern.makeForm("presidential pardon", "test");
	Form					*pardon = intern.makeForm("shrubbery creation", "test");

	intern.makeForm("lol form", "tamer");
	srand(time(NULL));
	bob.signForm(*shrubbery);
	bob.executeForm(*shrubbery);
	roger.signForm(*shrubbery);
	roger.executeForm(*shrubbery);
	bob.signForm(*robotomy);
	bob.executeForm(*robotomy);
	roger.signForm(*robotomy);
	roger.executeForm(*robotomy);
	bob.signForm(*pardon);
	bob.executeForm(*pardon);
	roger.signForm(*pardon);
	roger.executeForm(*pardon);
	delete shrubbery;
	delete robotomy;
	delete pardon;
	return (0);
}
