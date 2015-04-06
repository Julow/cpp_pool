/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 14:08:17 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/06 16:16:25 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void) : _empty(true)
{
}

Contact::~Contact(void)
{
}

bool			Contact::empty(void) const
{
	return (this->_empty);
}

void			Contact::init(void)
{
	if (!_get_info("First name", &(this->_firstName))
		|| !_get_info("Last name", &(this->_lastName))
		|| !_get_info("Nickname", &(this->_nickname))
		|| !_get_info("Login", &(this->_login))
		|| !_get_info("Postal Address", &(this->_postalAddress))
		|| !_get_info("Email Address", &(this->_emailAddress))
		|| !_get_info("Phone Number", &(this->_phoneNumber))
		|| !_get_info("Birthday Date", &(this->_birthdayDate))
		|| !_get_info("Favorite meal", &(this->_favoriteMeal))
		|| !_get_info("Underwear Color", &(this->_underwearColor))
		|| !_get_info("Darkest Secret", &(this->_darkestSecret)))
		return ;
	this->_empty = false;
}

void			Contact::print_simple(int index) const
{
	std::cout.width(10);
	std::cout << index << '|';
	this->_print_simple1(&(this->_firstName));
	std::cout << '|';
	this->_print_simple1(&(this->_lastName));
	std::cout << '|';
	this->_print_simple1(&(this->_nickname));
	std::cout << std::endl;
}

void			Contact::_print_simple1(std::string const *str) const
{
	if (str->size() > 10)
		std::cout.write(str->c_str(), 9) << '.';
	else
	{
		std::cout.width(10);
		std::cout << *str;
	}
}

void			Contact::print_detail(void) const
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal Address: " << this->_postalAddress << std::endl;
	std::cout << "Email Address: " << this->_emailAddress << std::endl;
	std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
	std::cout << "Birthday Date: " << this->_birthdayDate << std::endl;
	std::cout << "Favorite meal: " << this->_favoriteMeal << std::endl;
	std::cout << "Underwear Color: " << this->_underwearColor << std::endl;
	std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
}

bool			Contact::_get_info(const char *name, std::string *dst)
{
	dst->clear();
	while (dst->size() <= 0)
	{
		std::cout << name << ": ";
		std::getline(std::cin, *dst);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cin.clear();
			return (false);
		}
	}
	return (true);
}
