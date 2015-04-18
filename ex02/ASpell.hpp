/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:08:39 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:40:35 by exam             ###   ########.fr       */
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

	std::string const	&getName(void) const;
	std::string const	&getEffects(void) const;

	virtual ASpell		*clone(void) const = 0;

	void				launch(ATarget const &t) const;

protected:
	std::string			name;
	std::string			effects;

private:
	ASpell(void);
	ASpell(ASpell const &src);
	ASpell				&operator=(ASpell const &src);
};

#endif
