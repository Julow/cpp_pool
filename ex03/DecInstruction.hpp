/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecInstruction.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:17:38 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 15:59:20 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DECINSTRUCTION_HPP
# define DECINSTRUCTION_HPP

# include "IInstruction.hpp"

class	DecInstruction : public IInstruction
{
public:
	DecInstruction(void);
	DecInstruction(DecInstruction const &src);
	virtual ~DecInstruction(void);

	virtual void		execute(Mindopen &mind) const;

protected:

private:
	DecInstruction		&operator=(DecInstruction const &rhs);
};

#endif
