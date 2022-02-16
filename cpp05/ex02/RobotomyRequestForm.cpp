/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:29:14 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 13:20:43 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#define R_NAME "RobotomyRequest"
#define R_SIGN 72
#define R_EXEC 45

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string str )
: Form(R_NAME, R_SIGN, R_EXEC), target( str )
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
: Form(R_NAME, R_SIGN, R_EXEC), target( src.target )
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	if ( this == &src )
		return ( *this );
	this->target = src.target;
	return ( *this );
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	Form::checkExecutable(executor);
	std::cout << "- - - drilling noises - - -" << std::endl;
	srand( time( NULL ) );
	if ( rand() % 2 == 0 )
		std::cout << this->target << " has been robotomized success." << std::endl;
	else
		std::cout << this->target << " has been robotomized fail." << std::endl;
}
