/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteInstruction.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:38 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 15:58:53 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITEINSTRUCTION_HPP
# define WRITEINSTRUCTION_HPP

# include "IInstruction.hpp"

class	WriteInstruction : public IInstruction
{
public:
	WriteInstruction(void);
	WriteInstruction(WriteInstruction const &src);
	virtual ~WriteInstruction(void);

	virtual void		execute(Mindopen &mind) const;

protected:

private:
	WriteInstruction			&operator=(WriteInstruction const &rhs);
};

#endif
