/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:39:15 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 16:33:18 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &src);
	virtual ~PlasmaRifle(void);

	virtual void		attack(void) const;

	PlasmaRifle			&operator=(PlasmaRifle const &rhs);

protected:

private:
};

#endif
