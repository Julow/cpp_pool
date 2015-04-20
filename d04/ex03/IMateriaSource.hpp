/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 10:45:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/11 11:52:20 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"
# include <string>

class	AMateria;

class	IMateriaSource
{
public:
	virtual ~IMateriaSource(void){}

	virtual void			learnMateria(AMateria *m) = 0;
	virtual AMateria		*createMateria(std::string const &type) = 0;

protected:

private:
};

#endif
