/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LoopInstruction.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:38 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 15:59:03 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOOPINSTRUCTION_HPP
# define LOOPINSTRUCTION_HPP

# include "IInstruction.hpp"

class	LoopInstruction : public IInstruction
{
public:
	LoopInstruction(void);
	LoopInstruction(LoopInstruction const &src);
	virtual ~LoopInstruction(void);

	virtual void		execute(Mindopen &mind) const;

protected:

private:
	LoopInstruction			&operator=(LoopInstruction const &rhs);
};

#endif
