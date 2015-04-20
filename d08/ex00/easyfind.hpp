/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 11:41:43 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 12:06:33 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <map>

template< typename T >
bool			easyfind(T const &container, int search)
{
	typename T::const_iterator	it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		if (*it == search)
			return (true);
	}
	return (false);
}

template< typename T >
bool			easyfind(std::map<T, int> const &container, int search)
{
	typename std::map<T, int>::const_iterator	it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		if (it->second == search)
			return (true);
	}
	return (false);
}

#endif
