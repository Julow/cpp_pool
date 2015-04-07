/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 13:43:21 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 13:55:30 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <string>

class	Human
{
public:
	Human(void);
	~Human(void);

	const Brain		&getBrain(void) const;
	std::string		identify(void) const;

private:
	Brain			_brain;
};

#endif
