/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LeftInstruction.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:38 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 15:59:07 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEFTINSTRUCTION_HPP
# define LEFTINSTRUCTION_HPP

# include "IInstruction.hpp"

class	LeftInstruction : public IInstruction
{
public:
	LeftInstruction(void);
	LeftInstruction(LeftInstruction const &src);
	virtual ~LeftInstruction(void);

	virtual void		execute(Mindopen &mind) const;

protected:

private:
	LeftInstruction			&operator=(LeftInstruction const &rhs);
};

#endif
