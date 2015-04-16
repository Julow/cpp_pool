/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IInstruction.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 14:55:16 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 16:16:35 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IINSTRUCTION_HPP
# define IINSTRUCTION_HPP

class	Mindopen;

class	IInstruction
{
public:
	IInstruction(void);
	IInstruction(IInstruction const &src);
	virtual ~IInstruction(void);

	virtual void		execute(Mindopen &mind) const;

protected:

private:
	IInstruction		&operator=(IInstruction const &rhs);
};

#endif
