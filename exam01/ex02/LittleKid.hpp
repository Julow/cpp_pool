/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LittleKid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:28:55 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:31:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITTLEKID_HPP
# define LITTLEKID_HPP

# include "ATarget.hpp"

class	LittleKid : public ATarget
{
public:
	LittleKid(void);
	virtual ~LittleKid(void);

	virtual ATarget			*clone(void) const;

protected:

private:
	LittleKid(LittleKid const &src);
	LittleKid				&operator=(LittleKid const &rhs);
};

#endif
