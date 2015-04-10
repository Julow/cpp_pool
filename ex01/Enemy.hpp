/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:39:02 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 16:53:12 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class	Enemy
{
public:
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &src);
	virtual ~Enemy(void);

	std::string const	&getType(void) const;

	int					getHP(void) const;

	virtual void		takeDamage(int damage);

	Enemy				&operator=(Enemy const &rhs);

protected:
	std::string			_type;

	int					_hp;

private:
	Enemy(void);
};

#endif
