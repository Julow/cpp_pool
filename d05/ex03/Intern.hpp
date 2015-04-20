/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 18:12:50 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 18:35:48 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class	Intern
{
public:
	class	InternFiredException : public std::exception
	{
	public:
		InternFiredException(void);
		InternFiredException(InternFiredException const &src);
		virtual ~InternFiredException(void) throw();

		virtual const char	*what(void) const throw();

	private:
		InternFiredException	&operator=(InternFiredException const &rhs);
	};

	Intern(void);
	virtual ~Intern(void);

	Form			*makeForm(std::string const &name, std::string const &target) const throw(InternFiredException);

protected:

private:
	Intern(Intern const &src);
	Intern			&operator=(Intern const &rhs);
};

#endif
