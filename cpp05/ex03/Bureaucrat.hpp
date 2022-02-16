/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:26:25 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 15:16:23 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>

# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const name;
	int	grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& src);
	~Bureaucrat();
	Bureaucrat&	operator=(const Bureaucrat& src);

	std::string	getName( void ) const;
	int	getGrade( void )const;
	void	incrementGrade( void );
	void	decrementGrade( void );
	void	signForm(Form& src);
	void	executeForm(const Form& form);


	class GradeTooHighException : public std::exception
	{
		public:
			const char* what( void ) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what ( void ) const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src);

#endif
