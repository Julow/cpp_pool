/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unit.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 18:28:04 by exam              #+#    #+#             */
/*   Updated: 2015/04/10 19:50:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_CLASS_HPP
# define UNIT_CLASS_HPP

# include <iostream>
# include <string>

class	Unit
{
	public:
		Unit(void);
		Unit(std::string const &type, int x, int y, int damage, int hp, int maxHp);
		Unit(Unit const &src);
		virtual ~Unit(void);

		Unit		&operator+=(int n);
		Unit		&operator-=(int n);
		Unit		&operator=(Unit const &rhs);

		virtual void	move(int x, int y);
		virtual void	die(void);
		void		attack(Unit &target) const;

		int			getIndex(void) const;
		std::string const &getType(void) const;
		int			getX(void) const;
		int			getY(void) const;
		int			getDam(void) const;
		int			getCHP(void) const;
		int			getMHP(void) const;

	protected:
		int			_index;
		std::string	_type;
		int			_x;
		int			_y;
		int			_damage;
		int			_hp;
		int			_maxHp;
		bool		_die;

	private:
		static int		index;

		void			print_created(void) const;
};

std::ostream	&operator<<(std::ostream &o, Unit const &unit);

#endif
