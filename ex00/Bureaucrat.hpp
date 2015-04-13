/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 14:14:51 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 15:39:15 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <ostream>

class	Bureaucrat
{
public:
	class	GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what(void) const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what(void) const throw();
	};

	Bureaucrat(std::string const &name, int grade) throw(GradeTooHighException, GradeTooLowException);
	virtual ~Bureaucrat(void);

	std::string const	&getName(void) const;
	int					getGrade(void) const;

	void				incGrade(void) throw(GradeTooHighException);
	void				decGrade(void) throw(GradeTooLowException);

	Bureaucrat			&operator++(void) throw(GradeTooHighException);
	Bureaucrat			&operator--(void) throw(GradeTooLowException);

protected:
	std::string			_name;

	int					_grade;

private:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat			&operator=(Bureaucrat const &rhs);
};

std::ostream		&operator<<(std::ostream &o, Bureaucrat &b);

#endif
