/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 14:25:45 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/06 15:53:24 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define CONTACT_COUNT		8

class	PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	void			start(void);

private:
	Contact			_contacts[CONTACT_COUNT];

	void			_add(void);
	void			_search(void) const;
	void			_detail(void) const;
};

#endif
