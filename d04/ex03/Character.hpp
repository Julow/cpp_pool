/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 10:45:22 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/11 11:47:13 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Character.hpp"
# include "AMateria.hpp"
# include <string>

class	Character : public ICharacter
{
public:
	Character(std::string const &name);
	Character(Character const &src);
	virtual ~Character(void);

	virtual std::string	const	&getName(void) const;
	virtual void				equip(AMateria *m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter &target);

	Character					&operator=(Character const &rhs);

protected:
	std::string					_name;
	AMateria					*_mats[4];

	void						_destroy(void);

private:
	Character(void);
};

#endif
