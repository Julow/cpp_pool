/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 14:49:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 15:27:23 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class	HumanB
{
public:
	HumanB(char const *name);
	~HumanB(void);

	void			attack(void) const;

	void			setWeapon(Weapon &weapon);

private:
	std::string		_name;
	Weapon			*_weapon;

};

#endif
