/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 10:45:28 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/11 11:40:47 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria
{
public:
	Cure(void);
	Cure(Cure const &src);
	virtual ~Cure(void);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);

	Cure				&operator=(Cure const &rhs);

protected:

private:
};

#endif
