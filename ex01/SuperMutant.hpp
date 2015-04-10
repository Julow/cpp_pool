/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 16:29:32 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 16:33:07 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const &src);
	virtual ~SuperMutant(void);

	virtual void		takeDamage(int damage);

	SuperMutant			&operator=(SuperMutant const &rhs);

protected:

private:
};

#endif
