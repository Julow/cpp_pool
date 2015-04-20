/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 17:51:04 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/07 18:20:22 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>

# define BUFF_SIZE		512

class	Cat
{
public:
	void			read(std::string const &str);

private:
	void			_readFile(std::string const &str);
	void			_read(std::istream &in);

};

#endif
