/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:23:04 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 22:15:39 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main( void )
{
	Form *sform = new ShrubberyCreationForm("shrubbery");
	Form *rform = new RobotomyRequestForm("robotomy");
	Form *pform = new PresidentialPardonForm("presidential");
	std::cout << std::endl;

	Bureaucrat jeson("jeson", 150);
	std::cout << jeson << std::endl;

	jeson.executeForm(*pform);
	std::cout << std::endl;

	while (jeson.getGrade() > 5)
		jeson.incrementGrade();
	jeson.executeForm(*pform);
	std::cout << std::endl;

	jeson.signForm(*pform);
	std::cout << std::endl;

	jeson.executeForm(*pform);

	std::cout << std::endl;
	jeson.signForm(*rform);

	std::cout << std::endl;
	jeson.executeForm(*rform);

	std::cout << "\n";
	jeson.signForm(*sform);
	std::cout << std::endl;
	jeson.executeForm(*sform);
	return ( 0 );
}
