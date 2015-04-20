/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 16:44:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 18:05:02 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	: Form("PresidentialPardonForm", target, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void				PresidentialPardonForm::execute(Bureaucrat const &b) const throw(GradeTooLowException, NotSignedException)
{
	Form::execute(b);
	std::cout << "Tells us " << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
