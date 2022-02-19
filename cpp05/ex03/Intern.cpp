/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:32:45 by jeson             #+#    #+#             */
/*   Updated: 2022/02/17 14:50:25 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& src)
{
	(void)src;
}

Intern::~Intern()
{
}

Intern&	Intern::operator=(const Intern& src)
{
	(void)src;
	return (*this);
}

Form*	Intern::getPForm( std::string target )
{
	return ( new PresidentialPardonForm(target) );
}

Form*	Intern::getRForm( std::string target )
{
	return ( new RobotomyRequestForm(target) );
}

Form*	Intern::getSForm( std::string target )
{
	return ( new ShrubberyCreationForm(target) );
}

Form*	Intern::makeForm( std::string formname, std::string formtarget )
{
	t_form	lst_form[3] = {
		{"presidential pardon", &Intern::getPForm},
		{"shrubbery creation", &Intern::getSForm},
		{"robotomy request", &Intern::getRForm}
	};

	for (int i = 0; i < 3; i++)
	{
		if ( formname == lst_form[i].formname )
		{
			std::cout << "Intern creates <" << formname << ">." << std::endl;
			return ((this->*lst_form[i].getForm)(formtarget));
		}
	}
	throw ( CannotFoundFormException() );
}

const char* Intern::CannotFoundFormException::what() const throw()
{
	return ("Cannot found match name.");
}
