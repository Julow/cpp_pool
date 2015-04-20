/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncInstruction.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:38 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 15:59:10 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCINSTRUCTION_HPP
# define INCINSTRUCTION_HPP

# include "IInstruction.hpp"

class	IncInstruction : public IInstruction
{
public:
	IncInstruction(void);
	IncInstruction(IncInstruction const &src);
	virtual ~IncInstruction(void);

	virtual void		execute(Mindopen &mind) const;

protected:

private:
	IncInstruction		&operator=(IncInstruction const &rhs);
};

#endif
