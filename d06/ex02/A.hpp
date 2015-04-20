/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/14 18:21:06 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/14 18:32:16 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class	A : public Base
{
public:
	A(void);
	virtual ~A(void);

protected:

private:
	A(A const &src);
	A			&operator=(A const &rhs);
};

#endif
