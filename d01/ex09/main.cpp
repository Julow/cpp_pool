/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 17:15:10 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 18:23:07 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int				main(void)
{
	Logger			l("log.txt");

	l.log("logToConsole", "mdrlol 1");
	l.log("logToConsole", "mdrlol 2");
	l.log("logToConsole", "mdrlol 3");
	l.log("logToFile", "mdrlol 4");
	l.log("logToFile", "mdrlol 5");
	l.log("logToFile", "mdrlol 6");
	return (0);
}
