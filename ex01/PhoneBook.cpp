/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 14:27:09 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/06 16:17:30 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void			PhoneBook::start(void)
{
	std::string		line;

	while (!std::cin.eof())
	{
		std::cout << "?> ";
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
			this->_add();
		else if (line.compare("SEARCH") == 0)
			this->_search();
		else if (line.compare("EXIT") == 0)
			break ;
		else if (line.size() > 0)
			std::cout << "Undefined command" << std::endl;
	}
}

void			PhoneBook::_add(void)
{
	int				i;

	for (i = 0; i < CONTACT_COUNT; i++)
		if (this->_contacts[i].empty())
		{
			this->_contacts[i].init();
			return ;
		}
	std::cout << "PhoneBook full." << std::endl;
}

void			PhoneBook::_search(void) const
{
	int				i;
	bool			empty;

	empty = true;
	for (i = 0; i < CONTACT_COUNT; i++)
		if (!this->_contacts[i].empty())
		{
			empty = false;
			this->_contacts[i].print_simple(i);
		}
	if (empty)
		std::cout << "PhoneBook is empty." << std::endl;
	else
		this->_detail();
}

void			PhoneBook::_detail(void) const
{
	int				i;

	std::cout << "INDEX > ";
	std::cin >> i;
	if (std::cin.fail() || std::cin.eof())
	{
		if (std::cin.eof())
			std::cout << std::endl;
		std::cin.clear();
		return ;
	}
	if (i >= CONTACT_COUNT || this->_contacts[i].empty())
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	this->_contacts[i].print_detail();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
