/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 15:41:24 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 16:35:16 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <exception>
# include <ostream>

class	Form
{
public:
	class	GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		GradeTooHighException(GradeTooHighException const &src);
		virtual ~GradeTooHighException(void) throw();

		virtual const char	*what(void) const throw();

	private:
		GradeTooHighException	&operator=(GradeTooHighException const &rhs);
	};

	class	GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		GradeTooLowException(GradeTooLowException const &src);
		virtual ~GradeTooLowException(void) throw();

		virtual const char	*what(void) const throw();

	private:
		GradeTooLowException	&operator=(GradeTooLowException const &rhs);
	};

	Form(std::string const &name, int signGrade, int execGrade) throw(GradeTooHighException, GradeTooLowException);
	virtual ~Form(void);

	std::string const	&getName(void) const;
	int					getSignGrade(void) const;
	int					getExecGrade(void) const;
	bool				isSigned(void) const;

	void				beSigned(Bureaucrat const &b) throw(GradeTooLowException);

protected:

private:
	Form(void);
	Form(Form const &src);
	Form				&operator=(Form const &rhs);

	std::string			_name;

	int					_signGrade;
	int					_execGrade;

	bool				_signed;
};

std::ostream		&operator<<(std::ostream &o, Form &f);

#endif
