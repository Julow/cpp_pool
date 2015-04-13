/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 18:12:50 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 18:23:13 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class	Intern
{
public:
	Intern(void);
	virtual ~Intern(void);

	Form			*makeForm(std::string const &name, std::string const &target) const;

protected:

private:
	Intern(Intern const &src);
	Intern			&operator=(Intern const &rhs);
};

#endif
