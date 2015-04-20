/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 17:06:53 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 17:26:46 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class	ISquad
{
public:
	virtual ~ISquad(void){}

	virtual int				getCount(void) const = 0;
	virtual ISpaceMarine	*getUnit(int) = 0;
	virtual int				push(ISpaceMarine *marine) = 0;

protected:

private:
};

#endif
