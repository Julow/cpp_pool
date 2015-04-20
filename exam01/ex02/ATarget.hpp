/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 19:12:52 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 19:41:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>

class	ASpell;

class	ATarget
{
public:
	ATarget(std::string const &t);
	virtual ~ATarget(void);

	std::string const	&getType(void) const;

	virtual ATarget		*clone(void) const = 0;

	void				getHitBySpell(ASpell const &s) const;

protected:
	std::string			type;

private:
	ATarget(void);
	ATarget(ATarget const &src);
	ATarget				&operator=(ATarget const &rhs);
};

#endif
