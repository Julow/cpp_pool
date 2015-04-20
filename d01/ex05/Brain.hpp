/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 13:43:21 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 14:09:01 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain
{
public:
	Brain(void);
	~Brain(void);

	std::string		identify(void) const;

	int				getIq(void) const;

private:
	int				_iq;
};

#endif
