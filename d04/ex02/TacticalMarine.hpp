/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 17:07:05 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 17:23:21 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &src);
	virtual ~TacticalMarine(void);

	virtual ISpaceMarine	*clone(void) const;
	virtual void			 battleCry(void) const;
	virtual void			 rangedAttack(void) const;
	virtual void			 meleeAttack(void) const;

	TacticalMarine			&operator=(TacticalMarine const &rhs);

protected:

private:
};

#endif
