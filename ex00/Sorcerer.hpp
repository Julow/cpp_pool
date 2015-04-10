/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 14:46:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 15:33:08 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class	Sorcerer
{
public:
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(Sorcerer const &src);
	virtual ~Sorcerer(void);

	std::string const	&getName(void) const;
	std::string const	&getTitle(void) const;

	void				polymorph(Victim const &victim) const;

	Sorcerer			&operator=(Sorcerer const &rhs);

protected:

private:
	Sorcerer(void);

	std::string			_name;
	std::string			_title;
};

std::ostream			&operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
