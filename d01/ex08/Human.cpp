/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 16:20:48 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 16:50:00 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

void			Human::action(std::string const &action_name, std::string const &target)
{
	t_action_t		actions[] = {
		{"meleeAttack", &Human::meleeAttack},
		{"rangedAttack", &Human::rangedAttack},
		{"intimidatingShout", &Human::intimidatingShout},
	};
	int					i;

	i = -1;
	while (++i < 3)
		if (action_name.compare(actions[i].name) == 0)
		{
			(this->*(actions[i].f))(target);
			return ;
		}
}

void			Human::meleeAttack(std::string const &target)
{
	std::cout << "Melee Attack vs " << target << std::endl;
}

void			Human::rangedAttack(std::string const &target)
{
	std::cout << "Ranged Attack vs " << target << std::endl;
}

void			Human::intimidatingShout(std::string const &target)
{
	std::cout << "Intimidating Shout vs " << target << std::endl;
}

