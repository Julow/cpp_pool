/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 14:45:48 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 15:28:45 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon : virtual public Victim
{
public:
	Peon(std::string const &name);
	Peon(Peon const &src);
	virtual ~Peon(void);

	virtual void		getPolymorphed(void) const;

	Peon			&operator=(Peon const &rhs);

protected:

private:
	Peon(void);
};

#endif
