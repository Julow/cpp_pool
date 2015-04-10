/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 14:45:55 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 15:32:23 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class	Victim
{
public:
	Victim(std::string const &name);
	Victim(Victim const &src);
	virtual ~Victim(void);

	std::string const	&getName(void) const;

	virtual void		getPolymorphed(void) const;

	Victim				&operator=(Victim const &rhs);

protected:
	std::string			_name;

private:
	Victim(void);
};

std::ostream			&operator<<(std::ostream &o, Victim const &rhs);

#endif
