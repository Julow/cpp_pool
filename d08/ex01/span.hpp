/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 12:08:26 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 12:41:36 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>

class	Span
{
public:
	Span(unsigned int n);
	virtual ~Span(void);

	void				addNumber(int num) throw(std::overflow_error);

	int					shortestSpan(void) const throw(std::underflow_error);
	int					longestSpan(void) const throw(std::underflow_error);

protected:
	std::vector<int>	_vector;
	unsigned int		_n;

private:
	Span(void);
	Span(Span const &src);
	Span				&operator=(Span const &rhs);
};

#endif
