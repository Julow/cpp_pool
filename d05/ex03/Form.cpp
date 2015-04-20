/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 15:41:26 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 17:51:08 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, std::string const &target, int signGrade, int execGrade) throw(GradeTooHighException, GradeTooLowException)
	: _name(name), _target(target), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
}

Form::~Form(void)
{
}

std::string const	&Form::getName(void) const
{
	return (_name);
}

std::string const	&Form::getTarget(void) const
{
	return (_target);
}

int					Form::getSignGrade(void) const
{
	return (_signGrade);
}

int					Form::getExecGrade(void) const
{
	return (_execGrade);
}

bool				Form::isSigned(void) const
{
	return (_signed);
}

void				Form::beSigned(Bureaucrat const &b) throw(GradeTooLowException)
{
	if (b.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	_signed = true;
}

void				Form::execute(Bureaucrat const &b) const throw(GradeTooLowException, NotSignedException)
{
	if (b.getGrade() > _execGrade)
		throw Form::GradeTooLowException();
	if (!_signed)
		throw Form::NotSignedException();
}

Form::GradeTooHighException::GradeTooHighException(void)
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	(void)src;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
}

const char			*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too Hight");
}

Form::GradeTooLowException::GradeTooLowException(void)
{
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	(void)src;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
}

const char			*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low");
}

Form::NotSignedException::NotSignedException(void)
{
}

Form::NotSignedException::NotSignedException(NotSignedException const &src)
{
	(void)src;
}

Form::NotSignedException::~NotSignedException(void) throw()
{
}

const char			*Form::NotSignedException::what(void) const throw()
{
	return ("Not signed");
}

std::ostream		&operator<<(std::ostream &o, Form &f)
{
	o << "Form " << f.getName() << ", sign grade: " << f.getSignGrade() << ", exec grade: " << f.getExecGrade();
	if (f.isSigned())
		o << ", signed" << std::endl;
	else
		o << ", not signed" << std::endl;
	return (o);
}
