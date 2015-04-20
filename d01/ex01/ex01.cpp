/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 12:06:21 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 12:10:25 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void			memoryLeak(void)
{
	std::string		*panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}
