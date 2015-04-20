/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:39:23 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 16:52:06 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class	AWeapon
{
public:
	AWeapon(std::string const &name, int apCost, int damage);
	AWeapon(AWeapon const &src);
	virtual ~AWeapon(void);

	std::string const	&getName(void) const;

	int					getAPCost(void) const;
	int					getDamage(void) const;

	virtual void		attack(void) const = 0;

	AWeapon				&operator=(AWeapon const &rhs);

protected:
	std::string			_name;

	int					_apCost;
	int					_damage;

private:
	AWeapon(void);
};

#endif
