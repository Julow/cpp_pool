/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:38:46 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/10 16:53:48 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class	RadScorpion : public Enemy
{
public:
	RadScorpion(void);
	RadScorpion(RadScorpion const &src);
	virtual ~RadScorpion(void);

	RadScorpion			&operator=(RadScorpion const &rhs);

protected:

private:
};

#endif
