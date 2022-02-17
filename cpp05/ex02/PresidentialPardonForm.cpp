/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:28:39 by jeson             #+#    #+#             */
/*   Updated: 2022/02/17 15:13:06 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#define P_NAME "Presidential_Pardon"
#define P_SIGN 25
#define P_EXEC 5

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm( std::string str )
: Form(P_NAME, P_SIGN, P_EXEC), target( str )
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
: Form(P_NAME, P_SIGN, P_EXEC), target( src.target )
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	if ( this == &src )
		return ( *this );
	this->target = src.target;
	return ( *this );
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	Form::checkExecutable(executor);	// throws GradeTooLow or FormNotSigned
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
