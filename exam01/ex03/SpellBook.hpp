/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 20:12:23 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 20:18:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include "ASpell.hpp"
# include <string>
# include <map>

class	SpellBook
{
public:
	SpellBook(void);
	virtual ~SpellBook(void);

	void				learnSpell(ASpell *s);
	void				forgetSpell(std::string const &s);
	ASpell				*createSpell(std::string const &s);

protected:
	std::map<std::string, ASpell*>	_spells;

private:
	SpellBook(SpellBook const &src);
	SpellBook			&operator=(SpellBook const &rhs);
};

#endif
