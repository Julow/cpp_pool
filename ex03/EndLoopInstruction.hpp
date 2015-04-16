/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EndLoopInstruction.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:38 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 15:59:17 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENDLOOPINSTRUCTION_HPP
# define ENDLOOPINSTRUCTION_HPP

# include "IInstruction.hpp"

class	EndLoopInstruction : public IInstruction
{
public:
	EndLoopInstruction(void);
	EndLoopInstruction(EndLoopInstruction const &src);
	virtual ~EndLoopInstruction(void);

	virtual void		execute(Mindopen &mind) const;

protected:

private:
	EndLoopInstruction			&operator=(EndLoopInstruction const &rhs);
};

#endif
