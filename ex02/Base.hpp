/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/14 18:20:12 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/14 18:34:41 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class	Base
{
public:
	virtual ~Base(void);

protected:
	Base(void);

private:
	Base(Base const &src);
	Base			&operator=(Base const &rhs);
};

#endif
