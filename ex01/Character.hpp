/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:38:43 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 16:52:34 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

# define MAX_AP			40

class	Character
{
public:
	Character(std::string const &name);
	Character(Character const &src);
	virtual ~Character(void);

	void				recoverAP(void);
	void				equip(AWeapon *weapon);
	void				attack(Enemy *enemy);

	std::string const	&getName(void) const;
	AWeapon				*getWeapon(void) const;
	int					getAP(void) const;

	Character			&operator=(Character const &rhs);

protected:
	std::string			_name;

	AWeapon				*_weapon;

	int					_ap;

private:
	Character(void);
};

std::ostream			&operator<<(std::ostream &o, Character const &c);

#endif
