/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:24:56 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 15:30:10 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>

class	ScavTrap
{
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);

	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);

	int					takeAttack(unsigned int amount);
	void				beRepaired(unsigned int amount);

	void				challengeNewcomer(void);

	ScavTrap			&operator=(ScavTrap const &rhs);

private:
	ScavTrap(void);

	std::string			_name;

	unsigned int		_hitPoints;
	unsigned int		_maxHitPoints;
	unsigned int		_energyPoints;
	unsigned int		_maxEnergyPoints;
	unsigned int		_level;
	unsigned int		_meleeDamage;
	unsigned int		_rangedDamage;
	unsigned int		_armorReduction;
};

#endif
