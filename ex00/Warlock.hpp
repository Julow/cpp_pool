/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 18:11:32 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 18:21:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>

class	Warlock
{
public:
	Warlock(std::string const &name, std::string const &title);
	virtual ~Warlock(void);

	std::string const	&getName(void) const;
	std::string const	&getTitle(void) const;

	void				setTitle(std::string const &title);

	void				introduce(void) const;

protected:
	std::string const	_name;
	std::string			_title;

private:
	Warlock(void);
	Warlock(Warlock const &src);
	Warlock		&operator=(Warlock const &rhs);
};

#endif
