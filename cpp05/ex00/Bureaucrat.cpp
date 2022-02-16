/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:26:51 by jeson             #+#    #+#             */
/*   Updated: 2022/02/15 22:18:12 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name( "none" )
{
	grade = 0;
}

Bureaucrat::Bureaucrat( std::string name, int grade ): name( name ), grade( grade )
{
	if ( grade < 1 )
		throw ( GradeTooHighException() );
	if ( grade > 150 )
		throw ( GradeTooLowException() );
}

Bureaucrat::Bureaucrat( const Bureaucrat& src ): name( src.name ), grade( src.grade )
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& src)
{
	if (this == &src)
		return (*this);
	(*const_cast<std::string *>(&this->name)) = src.getName();
	this->grade = src.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName( void ) const
{
	return ( this->name );
}

int	Bureaucrat::getGrade( void ) const
{
	return ( this->grade );
}

void	Bureaucrat::incrementGrade( void )
{
	if ( grade <= 1 )
		throw ( GradeTooHighException() );
	--grade;
}

void	Bureaucrat::decrementGrade( void )
{
	if ( grade >= 150 )
		throw ( GradeTooLowException() );
	++grade;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src)
{
    os << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
    return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}
