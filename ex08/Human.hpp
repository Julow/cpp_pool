/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 16:20:44 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 16:33:47 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>

class	Human
{
public:
	void			action(std::string const &action_name, std::string const &target);

private:
	void			meleeAttack(std::string const &target);
	void			rangedAttack(std::string const &target);
	void			intimidatingShout(std::string const &target);
};

typedef struct	s_action_t
{
	std::string		name;
	void			(Human::*f)(std::string const &target);
}				t_action_t;

#endif
