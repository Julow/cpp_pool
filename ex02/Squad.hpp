/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 17:07:12 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 17:29:00 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class	Squad : public ISquad
{
public:
	Squad(void);
	Squad(Squad const &src);
	virtual ~Squad(void);

	virtual int				getCount(void) const;
	virtual ISpaceMarine	*getUnit(int);
	virtual int				push(ISpaceMarine *marine);

	Squad					&operator=(Squad const &rhs);

protected:

private:
};

#endif
