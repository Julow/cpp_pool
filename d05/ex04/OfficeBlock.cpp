/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 18:26:27 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 18:57:44 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void)
	: _intern(NULL), _signer(NULL), _executor(NULL)
{
}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor)
	: _intern(intern), _signer(signer), _executor(executor)
{
}

OfficeBlock::~OfficeBlock(void)
{
}

void				OfficeBlock::setIntern(Intern *intern)
{
	_intern = intern;
}

void				OfficeBlock::setSigner(Bureaucrat *signer)
{
	_signer = signer;
}

void				OfficeBlock::setExecutor(Bureaucrat *executor)
{
	_executor = executor;
}

void				OfficeBlock::doBureaucracy(std::string const &name, std::string const &target) const throw(IncompleteOfficeException, Intern::InternFiredException, Form::GradeTooLowException)
{
	Form				*form;

	if (_intern == NULL || _signer == NULL || _executor == NULL)
		throw IncompleteOfficeException();
	form = _intern->makeForm(name, target);
	_signer->signForm(*form);
	_executor->executeForm(*form);
	delete form;
}

OfficeBlock::IncompleteOfficeException::IncompleteOfficeException(void)
{
}

OfficeBlock::IncompleteOfficeException::IncompleteOfficeException(IncompleteOfficeException const &src)
{
	(void)src;
}

OfficeBlock::IncompleteOfficeException::~IncompleteOfficeException(void) throw()
{
}

const char			*OfficeBlock::IncompleteOfficeException::what(void) const throw()
{
	return ("Incomplete Office Block");
}
