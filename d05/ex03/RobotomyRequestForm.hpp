/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 16:44:03 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 17:59:30 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string const &target);
	virtual ~RobotomyRequestForm(void);

	virtual void			execute(Bureaucrat const &b) const throw(GradeTooLowException, NotSignedException);

protected:

private:
	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm		&operator=(RobotomyRequestForm const &rhs);
};

#endif
