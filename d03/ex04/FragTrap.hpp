/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:24:56 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 16:41:40 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &src);
	virtual ~FragTrap(void);

	void				vaulthunter_dot_exe(std::string const &target);

	FragTrap			&operator=(FragTrap const &rhs);

private:
	FragTrap(void);
};

#endif
