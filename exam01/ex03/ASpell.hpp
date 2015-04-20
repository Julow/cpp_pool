/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:08:39 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 20:09:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include "ATarget.hpp"
# include <string>

class	ASpell
{
public:
	ASpell(std::string const &n, std::string const &e);
	virtual ~ASpell(void);

	std::string			getName(void) const;
	std::string 		getEffects(void) const;

	virtual ASpell		*clone(void) const = 0;
	virtual ASpell		*cloneCombine(void) const;

	void				launch(ATarget const &t) const;

	void				combine(ASpell *s);

	bool				isCombined(void) const;

protected:
	std::string			name;
	std::string			effects;

	ASpell				*combined_with;

private:
	ASpell(void);
	ASpell(ASpell const &src);
	ASpell				&operator=(ASpell const &src);
};

#endif
