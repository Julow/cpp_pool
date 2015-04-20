/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ponymorph.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:25:00 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:59:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONYMORPH_HPP
# define PONYMORPH_HPP

# include "ASpell.hpp"

class	Ponymorph : public ASpell
{
public:
	Ponymorph(void);
	virtual ~Ponymorph(void);

	virtual ASpell		*clone(void) const;

protected:

private:
	Ponymorph(Ponymorph const &src);
	Ponymorph				&operator=(Ponymorph const &rhs);
};

#endif
