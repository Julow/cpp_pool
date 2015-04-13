/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 18:26:30 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 18:51:40 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "Bureaucrat.hpp"
# include "Intern.hpp"

class	OfficeBlock
{
public:
	class	IncompleteOfficeException : public std::exception
	{
	public:
		IncompleteOfficeException(void);
		IncompleteOfficeException(IncompleteOfficeException const &src);
		virtual ~IncompleteOfficeException(void) throw();

		virtual const char			*what(void) const throw();

	private:
		IncompleteOfficeException	&operator=(IncompleteOfficeException const &rhs);
	};

	OfficeBlock(void);
	OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor);
	virtual ~OfficeBlock(void);

	void				setIntern(Intern *intern);
	void				setSigner(Bureaucrat *signer);
	void				setExecutor(Bureaucrat *executor);

	void				doBureaucracy(std::string const &name, std::string const &target) const throw(IncompleteOfficeException, Intern::InternFiredException, Form::GradeTooLowException);

protected:
	Intern				*_intern;
	Bureaucrat			*_signer;
	Bureaucrat			*_executor;

private:
	OfficeBlock(OfficeBlock const &src);
	OfficeBlock			&operator=(OfficeBlock const &rhs);
};

#endif
