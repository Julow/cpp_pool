/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 11:50:15 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 12:01:59 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class	Pony
{
public:
	Pony(void);
	~Pony(void);
};

void			ponyOnTheHeap(void);
void			ponyOnTheStack(void);

#endif
