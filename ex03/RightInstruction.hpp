/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RightInstruction.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:38 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 15:58:57 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RIGHTINSTRUCTION_HPP
# define RIGHTINSTRUCTION_HPP

# include "IInstruction.hpp"

class	RightInstruction : public IInstruction
{
public:
	RightInstruction(void);
	RightInstruction(RightInstruction const &src);
	virtual ~RightInstruction(void);

	virtual void		execute(Mindopen &mind) const;

protected:

private:
	RightInstruction			&operator=(RightInstruction const &rhs);
};

#endif
