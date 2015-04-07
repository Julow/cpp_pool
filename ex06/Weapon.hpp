/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 14:48:22 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 15:21:07 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon
{
public:
	Weapon(char const *type);
	~Weapon(void);

	std::string const	&getType(void) const;

	void				setType(std::string const &str);

private:
	std::string			_type;
};

#endif
