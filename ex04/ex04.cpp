/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 13:39:35 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 13:41:23 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int				main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string		*ptr = &str;
	std::string		&ref = str;

	std::cout << "Brain by ptr: " << *ptr << std::endl;
	std::cout << "Brain by ref: " << ref << std::endl;
	return (0);
}
