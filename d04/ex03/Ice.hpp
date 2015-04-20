/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 10:45:34 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/11 11:40:56 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria
{
public:
	Ice(void);
	Ice(Ice const &src);
	virtual ~Ice(void);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);

	Ice					&operator=(Ice const &rhs);

protected:

private:
};

#endif
