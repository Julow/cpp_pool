/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:25:00 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:43:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class	Fwoosh : public ASpell
{
public:
	Fwoosh(void);
	virtual ~Fwoosh(void);

	virtual ASpell		*clone(void) const;

protected:

private:
	Fwoosh(Fwoosh const &src);
	Fwoosh				&operator=(Fwoosh const &rhs);
};

#endif
