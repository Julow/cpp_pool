/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 14:14:46 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/13 16:41:04 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int				main(void)
{
	Form			form1("form1", 5, 5);
	Form			form2("form2", 10, 5);
	Bureaucrat		bob("bob", 1);
	Bureaucrat		roger("roger", 6);

	std::cout << form1 << form2 << bob << roger;
	bob.signForm(form1);
	std::cout << form1 << form2 << bob << roger;
	bob.signForm(form2);
	std::cout << form1 << form2 << bob << roger;
	roger.signForm(form1);
	std::cout << form1 << form2 << bob << roger;
	roger.signForm(form2);
	std::cout << form1 << form2 << bob << roger;
	return (0);
}
