/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 11:53:08 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 12:01:51 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int				main(void)
{
	std::cout << "Fuck on the HEAP" << std::endl;
	ponyOnTheHeap();
	std::cout << "Fuck on the STACK" << std::endl;
	ponyOnTheStack();
	std::cout << "KTHXBYE" << std::endl;
	return (0);
}
