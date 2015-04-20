/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:24:56 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 16:41:32 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &src);
	virtual ~ScavTrap(void);

	void				challengeNewcomer(void);

	ScavTrap			&operator=(ScavTrap const &rhs);

private:
	ScavTrap(void);
};

#endif
