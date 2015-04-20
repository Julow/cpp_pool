/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 13:17:06 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/15 13:22:45 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void			swap(T &a, T &b)
{
	T				tmp = a;

	a = b;
	b = tmp;
}

template< typename T >
T const			&min(T const &a, T const &b)
{
	if (a < b)
		return (a);
	return (b);
}

template< typename T >
T const			&max(T const &a, T const &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
