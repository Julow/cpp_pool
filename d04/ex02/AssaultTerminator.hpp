/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 17:07:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 17:23:31 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const &src);
	virtual ~AssaultTerminator(void);

	virtual ISpaceMarine	*clone(void) const;
	virtual void			 battleCry(void) const;
	virtual void			 rangedAttack(void) const;
	virtual void			 meleeAttack(void) const;

	AssaultTerminator		&operator=(AssaultTerminator const &rhs);

protected:

private:
};

#endif
