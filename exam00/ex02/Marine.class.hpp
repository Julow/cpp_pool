/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Marine.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 19:48:40 by exam              #+#    #+#             */
/*   Updated: 2015/04/10 20:02:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MARINE_CLASS_HPP
# define MARINE_CLASS_HPP

# include "Unit.class.hpp"
# include <iostream>
# include <string>

class	Marine : public Unit
{
	public:
		Marine(void);
		Marine(int x, int y);
		Marine(Marine const &src);
		virtual ~Marine(void);

		virtual void	die(void);
		virtual void	move(int x, int y);

		void			stimpack(void);

		Marine			&operator=(Marine const &rhs);

	protected:

	private:
};

#endif
