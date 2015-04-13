/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 16:44:09 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 18:05:12 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: Form("ShrubberyCreationForm", target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void				ShrubberyCreationForm::execute(Bureaucrat const &b) const throw(GradeTooLowException, NotSignedException)
{
	Form::execute(b);
	std::ofstream		of(getTarget() + "_shrubbery");

	if (!of.good())
		return ;
	of << "       # #### ####" << std::endl;
	of << "      ### \\/#|### |/####" << std::endl;
	of << "     ##\\/#/ \\||/##/_/##/_#" << std::endl;
	of << "   ###  \\/###|/ \\/ # ###" << std::endl;
	of << " ##_\\_#\\_\\## | #/###_/_####" << std::endl;
	of << "## #### # \\ #| /  #### ##/##" << std::endl;
	of << " __#_--###`  |{,###---###-~" << std::endl;
	of << "           \\ }{" << std::endl;
	of << "            }}{" << std::endl;
	of << "            }}{" << std::endl;
	of << "       ejm  {{}" << std::endl;
	of << "      , -=-~{ .-^- _" << std::endl;
	of << "            `}" << std::endl;
	of << "             {" << std::endl;
	of << std::endl;
	of << "          &&& &&  & &&" << std::endl;
	of << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
	of << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
	of << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
	of << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
	of << "&&   && & &| &| /& & % ()& /&&" << std::endl;
	of << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
	of << "     &&     \\|||" << std::endl;
	of << "             |||" << std::endl;
	of << "             |||" << std::endl;
	of << "             |||" << std::endl;
	of << "       , -=-~  .-^- _" << std::endl;
}
