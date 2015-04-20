/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 10:45:40 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/11 11:52:41 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>

class	ICharacter;

class	AMateria
{
public:
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	virtual ~AMateria(void);

	std::string const	&getType(void) const;
	unsigned int		getXp(void) const;

	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);

	AMateria			&operator=(AMateria const &rhs);

protected:
	std::string			_type;

private:
	AMateria(void);

	unsigned int		_xp;
};

#endif
