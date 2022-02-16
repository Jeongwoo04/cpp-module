/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:58:07 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 22:17:09 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
: name("none"), gradeToSign(0), gradeToExecute(0)
{
	is_signed = false;
}

Form::Form( std::string name, int gradeToSign, int gradeToExecute )
: name( name ), gradeToSign( gradeToSign ), gradeToExecute( gradeToExecute )
{
	std::cout << "new form is created" << std::endl;
	if ( gradeToSign < 1 || gradeToExecute < 1 )
		throw( GradeTooHighException() );
	if ( gradeToSign > 150 || gradeToExecute > 150 )
		throw( GradeTooLowException() );
	is_signed = false;
}

Form::~Form()
{
}

Form::Form(const Form& src)
: name( src.getName() ), gradeToSign( src.getGradeToSign() ), gradeToExecute( src.getGradeToExecute() )
{
	is_signed = src.getIsSigned();
}

Form&	Form::operator=(const Form& src)
{
	if ( this == &src )
		return ( *this );
	*const_cast<std::string*>(&this->name) = src.getName();
	*const_cast<int*>(&this->gradeToSign) = src.getGradeToSign();
	*const_cast<int*>(&this->gradeToExecute) = src.getGradeToExecute();
	this->is_signed = src.getIsSigned();
	return ( *this );
}

std::string	Form::getName( void ) const
{
	return ( this->name );
}

bool	Form::getIsSigned( void ) const
{
	return ( this->is_signed );
}

int	Form::getGradeToSign( void ) const
{
	return ( this->gradeToSign );
}

int Form::getGradeToExecute( void ) const
{
	return ( this->gradeToExecute );
}

void	Form::beSigned(const Bureaucrat& src)
{
	std::cout << "[\tcheck grade beSigned\t]" << std::endl;
	if ( src.getGrade() <= this->gradeToSign )
		this->is_signed = true;
	else
		throw ( GradeTooLowException() );
}

void	Form::checkExecutable(const Bureaucrat& src) const
{
	if ( src.getGrade() > this->getGradeToExecute() )
		throw ( GradeTooLowException() );
	if ( this->is_signed == false )
		throw ( NoSignException() );
	std::cout << "[\texecutable !\t]" << std::endl;
}

const char*	Form::GradeTooHighException::what( void ) const throw()
{
	return ( "Grade too high" );
}

const char*	Form::GradeTooLowException::what( void ) const throw()
{
	return ( "Grade too low" );
}

const char* Form::NoSignException::what( void ) const throw()
{
	return ( "Form : Not signed");
}

std::ostream& operator<<(std::ostream& os, const Form& src)
{
	os << "- form's information -" << std::endl;
	os << "<form's name> : "<< src.getName() << std::endl;
	os << "<grade required to sign> : " << src.getGradeToSign() << std::endl;
	os << "<grade required to execute> : " << src.getGradeToExecute() << std::endl;
	os << "<form's sign result> : " << std::boolalpha << src.getIsSigned();
	return ( os );
}
