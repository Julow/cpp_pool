/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 11:50:15 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 18:34:30 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class	Pony
{
public:
	Pony(std::string name);
	~Pony(void);
	void				say(void);
private:
	Pony(void);

	std::string		_name;
};

void				ponyOnTheHeap(void);
void				ponyOnTheStack(void);

#endif
