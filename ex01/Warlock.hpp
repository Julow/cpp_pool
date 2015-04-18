/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 18:11:32 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 18:55:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <list>
# include <vector>

class	Warlock
{
public:
	Warlock(std::string const &name);
	virtual ~Warlock(void);

	std::string const		&getName(void) const;

	void					addTitle(std::string const &title);
	void					removeTitle(std::string const &title);

	void					introduce(void) const;

	void					addQuote(std::string const &quote);
	void					removeQuote(std::string const &quote);

	void					talk(void) const;

	std::list<std::string>	titles;

protected:
	std::string const		_name;

private:
	std::vector<std::string>	quotes;

	Warlock(void);
	Warlock(Warlock const &src);
	Warlock					&operator=(Warlock const &rhs);
};

#endif
