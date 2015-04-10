/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:39:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 16:33:24 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
public:
	PowerFist(void);
	PowerFist(PowerFist const &src);
	virtual ~PowerFist(void);

	virtual void		attack(void) const;

	PowerFist			&operator=(PowerFist const &rhs);

protected:

private:
};

#endif
