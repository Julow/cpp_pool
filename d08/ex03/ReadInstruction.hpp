/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadInstruction.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:38 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 15:58:59 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READINSTRUCTION_HPP
# define READINSTRUCTION_HPP

# include "IInstruction.hpp"

class	ReadInstruction : public IInstruction
{
public:
	ReadInstruction(void);
	ReadInstruction(ReadInstruction const &src);
	virtual ~ReadInstruction(void);

	virtual void		execute(Mindopen &mind) const;

protected:

private:
	ReadInstruction			&operator=(ReadInstruction const &rhs);
};

#endif
