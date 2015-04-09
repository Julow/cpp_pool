/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 16:36:08 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 16:47:51 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <string>

class	SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap(std::string const &name);
	SuperTrap(SuperTrap const &src);
	~SuperTrap(void);

	SuperTrap			&operator=(SuperTrap const &rhs);

private:
	SuperTrap(void);
};

#endif
