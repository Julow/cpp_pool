/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 16:44:05 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 18:05:06 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
	: Form("RobotomyRequestForm", target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void				RobotomyRequestForm::execute(Bureaucrat const &b) const throw(GradeTooLowException, NotSignedException)
{
	Form::execute(b);
	std::cout << "* some drilling noises *" << std::endl;
	if ((rand() % 2) == 0)
		std::cout << getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << getTarget() << " robotomisation failure." << std::endl;
}
