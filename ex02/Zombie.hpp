/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 12:12:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 12:39:53 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
public:
	Zombie(std::string name, std::string type);
	~Zombie(void);

	void			announce();

private:
	Zombie(void);

	std::string		_name;
	std::string		_type;
};

#endif
