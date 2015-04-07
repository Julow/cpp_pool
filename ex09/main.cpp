/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 17:15:10 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 17:36:08 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int				main(void)
{
	Logger			l("log.txt");

	l.log("logToConsole", "mdrlol");
	l.log("logToConsole", "mdrlol");
	l.log("logToConsole", "mdrlol");
	l.log("logToFile", "mdrlol");
	l.log("logToFile", "mdrlol");
	l.log("logToFile", "mdrlol");
	return (0);
}
