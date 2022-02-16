/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:23:04 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 22:41:07 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	try
	{
		Intern intern;
		Form* rrf;

		std::cout << "============= Intern & new form [robo] create =============" << std::endl;
		rrf = intern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;
		std::cout << std::endl;

		std::cout << "============= Intern & new form [pardon] create =============" << std::endl;
		rrf = intern.makeForm("presidential pardon", "Bender");
		std::cout << *rrf << std::endl;
		std::cout << std::endl;

		std::cout << "============= Intern & new form [cannot found matched name] create =============" << std::endl;
		rrf = intern.makeForm("form_that_intern_cant_handle", "Bender");
		std::cout << *rrf << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return ( 0 );
}
