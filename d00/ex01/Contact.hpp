/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 14:06:42 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/06 16:10:17 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
public:
	Contact(void);
	~Contact(void);

	bool			empty(void) const;

	void			init(void);

	void			print_simple(int index) const;
	void			print_detail(void) const;

private:
	bool			_empty;

	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickname;
	std::string		_login;
	std::string		_postalAddress;
	std::string		_emailAddress;
	std::string		_phoneNumber;
	std::string		_birthdayDate;
	std::string		_favoriteMeal;
	std::string		_underwearColor;
	std::string		_darkestSecret;

	void			_print_simple1(std::string const *str) const;

	static bool		_get_info(const char *name, std::string *dst);
};

#endif
