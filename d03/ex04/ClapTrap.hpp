/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 15:40:14 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 15:52:16 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
public:
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &src);
	virtual ~ClapTrap(void);

	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);

	int					takeAttack(unsigned int amount);
	void				beRepaired(unsigned int amount);

	ClapTrap			&operator=(ClapTrap const &rhs);

protected:
	std::string			_name;

	unsigned int		_hitPoints;
	unsigned int		_maxHitPoints;
	unsigned int		_energyPoints;
	unsigned int		_maxEnergyPoints;
	unsigned int		_level;
	unsigned int		_meleeDamage;
	unsigned int		_rangedDamage;
	unsigned int		_armorReduction;

private:
	ClapTrap(void);
};

#endif
