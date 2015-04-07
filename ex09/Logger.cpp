/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 17:15:21 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 17:48:06 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <ctime>

Logger::Logger(std::string const &file)
	: _of(file, std::ios_base::out | std::ios_base::app)
{
}

Logger::~Logger(void)
{
}

void			Logger::log(std::string const & dest, std::string const & message)
{
	t_action_t		actions[] = {
		{"logToConsole", &Logger::logToConsole},
		{"logToFile", &Logger::logToFile},
	};
	int					i;

	i = -1;
	while (++i < 3)
		if (dest.compare(actions[i].name) == 0)
		{
			(this->*(actions[i].f))(this->makeLogEntry(message));
			return ;
		}
}

void			Logger::logToConsole(std::string const &str)
{
	std::cout << str;
}

void			Logger::logToFile(std::string const &str)
{
	if (_of.is_open())
		_of << str;
}

std::string		Logger::makeLogEntry(std::string const &src) const
{
	std::stringstream	s;

	s << '[' << time(NULL) << "] " << src << std::endl;
	return (s.str());
}
