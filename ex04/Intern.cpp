/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 18:13:03 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 18:23:23 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Form			*Intern::makeForm(std::string const &name, std::string const &target) const
{
	if (name.compare("robotomy request") == 0)
	{
		std::cout << "Intern creates " << name << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (name.compare("presidential pardon") == 0)
	{
		std::cout << "Intern creates " << name << std::endl;
		return (new PresidentialPardonForm(target));
	}
	else if (name.compare("shrubbery creation") == 0)
	{
		std::cout << "Intern creates " << name << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	std::cout << "Intern fail create " << name << " form. Fired" << std::endl;
	return (NULL);
}
