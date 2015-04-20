/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 14:14:49 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 16:05:45 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) throw(GradeTooHighException, GradeTooLowException)
	: _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string const	&Bureaucrat::getName(void) const
{
	return (_name);
}

int					Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void				Bureaucrat::incGrade(void) throw(GradeTooHighException)
{
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;
}

void				Bureaucrat::decGrade(void) throw(GradeTooLowException)
{
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade++;
}

Bureaucrat			&Bureaucrat::operator++(void) throw(GradeTooHighException)
{
	incGrade();
	return (*this);
}

Bureaucrat			&Bureaucrat::operator--(void) throw(GradeTooLowException)
{
	decGrade();
	return (*this);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	(void)src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
}

const char			*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("What: Grade Too Hight");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	(void)src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
}

const char			*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("What: Grade Too Low");
}

std::ostream		&operator<<(std::ostream &o, Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (o);
}
