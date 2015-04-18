/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sprotch.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:25:00 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:55:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPROTCH_HPP
# define SPROTCH_HPP

# include "ASpell.hpp"

class	Sprotch : public ASpell
{
public:
	Sprotch(void);
	virtual ~Sprotch(void);

	virtual ASpell		*clone(void) const;

protected:

private:
	Sprotch(Sprotch const &src);
	Sprotch				&operator=(Sprotch const &rhs);
};

#endif
