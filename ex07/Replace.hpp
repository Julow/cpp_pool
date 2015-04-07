/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 15:38:13 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 16:17:01 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <fstream>

class	Replace
{
public:
	Replace(std::string file);
	~Replace(void);

	void			start(char const *s1, char const *s2);

private:
	std::ifstream	_if;
	std::ofstream	_of;

};

#endif
