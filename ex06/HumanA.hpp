/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 14:48:59 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 15:19:00 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class	HumanA
{
public:
	HumanA(char const *name, Weapon &weapon);
	~HumanA(void);

	void			attack(void) const;

private:
	std::string		_name;
	Weapon			&_weapon;

};

#endif
