/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:26:51 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 22:13:31 by jeson            ###   ########.fr       */
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

void		Bureaucrat::signForm(Form& form)
{
	std::cout << "[   checking required grade to signed   ]" << std::endl;
	try
	{
		form.beSigned(*this);
		std::cout << "<" << this->name << "> signs <" << form.getName() << ">" << std::endl;
		std::cout << "<" << this->name << "> grade : " << this->grade << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "<" << this->name << "> cannot sign <" << form.getName() << "> because <";
		std::cout << e.what() << ">" << std::endl;
		std::cout << "<" << this->name << "> grade : " << this->grade << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form& form)
{
	std::cout << "[\texecuteForm\t]" << std::endl;
	try
	{
		form.execute( *this );
		std::cout << "<" << this->name << "> executes <" << form.getName() << ">." << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "<" << this->name << "> cannot executes <" << form.getName() << "> because <";
		std::cout << e.what() << ">" << std::endl;
		std::cout << "<" << this->name << "> grade : " << this->grade << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src)
{
	os << "[\tbureaucrat's info\t]" << std::endl;
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
