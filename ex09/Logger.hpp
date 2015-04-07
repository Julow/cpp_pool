/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 17:15:17 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 17:31:43 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <string>
# include <fstream>

class	Logger
{
public:
	Logger(std::string const &file);
	~Logger(void);

	void			log(std::string const & dest, std::string const & message);

private:
	std::ofstream	_of;

	void			logToConsole(std::string const &str);
	void			logToFile(std::string const &str);

	std::string		makeLogEntry(std::string const &src) const;
};

typedef struct	s_action_t
{
	std::string		name;
	void			(Logger::*f)(std::string const &str);
}				t_action_t;

#endif
