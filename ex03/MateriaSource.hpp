/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 10:45:15 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/11 11:55:14 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include <cstdlib>

class	MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	virtual ~MateriaSource(void);

	void					learnMateria(AMateria *m);
	AMateria				*createMateria(std::string const &type);

	MateriaSource			&operator=(MateriaSource const &rhs);

protected:
	AMateria				*_mats[4];

private:
};

#endif
