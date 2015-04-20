/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 20:25:48 by exam              #+#    #+#             */
/*   Updated: 2015/04/17 20:29:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ATarget.hpp"
# include <string>
# include <map>

class	TargetGenerator
{
public:
	TargetGenerator(void);
	virtual ~TargetGenerator(void);

	void				learnTargetType(ATarget *t);
	void				forgetTargetType(std::string const &t);
	ATarget				*createTarget(std::string const &t);

protected:
	std::map<std::string, ATarget*>	_targets;

private:
	TargetGenerator(TargetGenerator const &src);
	TargetGenerator			&operator=(TargetGenerator const &rhs);
};

#endif
