/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:24:56 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/09 15:13:23 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>

class	FragTrap
{
public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);

	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);

	int					takeAttack(unsigned int amount);
	void				beRepaired(unsigned int amount);

	void				vaulthunter_dot_exe(std::string const &target);

	FragTrap			&operator=(FragTrap const &rhs);

private:
	FragTrap(void);

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
