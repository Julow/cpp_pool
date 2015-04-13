/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 16:43:58 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 17:59:48 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string const &target);
	virtual ~PresidentialPardonForm(void);

	virtual void			execute(Bureaucrat const &b) const throw(GradeTooLowException, NotSignedException);

protected:

private:
	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);
};

#endif
