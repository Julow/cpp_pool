/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InnocentWoman.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:28:55 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:58:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INNOCENTWOMAN_HPP
# define INNOCENTWOMAN_HPP

# include "ATarget.hpp"

class	InnocentWoman : public ATarget
{
public:
	InnocentWoman(void);
	virtual ~InnocentWoman(void);

	virtual ATarget			*clone(void) const;

protected:

private:
	InnocentWoman(InnocentWoman const &src);
	InnocentWoman				&operator=(InnocentWoman const &rhs);
};

#endif
