/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/14 18:20:56 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/14 18:32:28 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class	C : public Base
{
public:
	C(void);
	virtual ~C(void);

protected:

private:
	C(C const &src);
	C			&operator=(C const &rhs);
};

#endif
