/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 15:59:57 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 16:16:30 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &src);
	virtual ~NinjaTrap(void);

	void				ninjaShoebox(ClapTrap &trap);
	void				ninjaShoebox(ScavTrap &trap);
	void				ninjaShoebox(FragTrap &trap);
	void				ninjaShoebox(NinjaTrap &trap);

	NinjaTrap			&operator=(NinjaTrap const &rhs);

private:
	NinjaTrap(void);
};

#endif
