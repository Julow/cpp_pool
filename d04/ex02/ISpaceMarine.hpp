/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 17:06:55 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 17:18:20 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class	ISpaceMarine
{
public:
	virtual ~ISpaceMarine(void){}

	virtual ISpaceMarine	*clone(void) const = 0;
	virtual void			 battleCry(void) const = 0;
	virtual void			 rangedAttack(void) const = 0;
	virtual void			 meleeAttack(void) const = 0;

protected:

private:
};

#endif
