/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:23:04 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 22:31:02 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main( void )
{
	std::cout << "============= new form create =============" << std::endl;
	Form *sform = new ShrubberyCreationForm("shrubbery");
	Form *rform = new RobotomyRequestForm("robotomy");
	Form *pform = new PresidentialPardonForm("presidential");
	std::cout << std::endl;

	std::cout << "============= bureaucrat create =============" << std::endl;
	Bureaucrat jeson("jeson", 150);
	std::cout << jeson << std::endl;

	std::cout << "============= excuteForm before signed form =============" << std::endl;
	jeson.executeForm(*pform);
	std::cout << std::endl;

	while (jeson.getGrade() > 10)
		jeson.incrementGrade();
	jeson.executeForm(*pform);
	std::cout << std::endl;

	std::cout << "============= excuteForm after signed form =============" << std::endl;
	std::cout << std::endl;

	std::cout << "============= sign pform . . ? =============" << std::endl;
	jeson.signForm(*pform);
	std::cout << std::endl;

	std::cout << "============= pForm excutable !? =============" << std::endl;
	jeson.executeForm(*pform);
	std::cout << std::endl;

	std::cout << "============= sign rform . . ? =============" << std::endl;
	jeson.signForm(*rform);
	std::cout << std::endl;

	std::cout << "============= rForm excutable !? =============" << std::endl;
	jeson.executeForm(*rform);
	std::cout << std::endl;

	std::cout << "============= sign sform . . ? =============" << std::endl;
	jeson.signForm(*sform);
	std::cout << std::endl;

	std::cout << "============= sForm excutable !? =============" << std::endl;
	jeson.executeForm(*sform);
	return ( 0 );
}
