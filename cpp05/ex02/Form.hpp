/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:57:45 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 12:09:51 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool	is_signed;
	const int	gradeToSign;
	const int	gradeToExecute;

public:
	Form();
	Form( std::string name, int gradeToSign, int gradeToExecute );
	virtual ~Form();
	Form(const Form& src);
	Form&	operator=(const Form& src);

	std::string	getName( void ) const;
	bool	getIsSigned( void ) const;
	int	getGradeToSign( void ) const;
	int getGradeToExecute( void ) const;
	void	beSigned(const Bureaucrat& src);
	virtual void	execute(Bureaucrat const & executor) const = 0;
	void	checkExecutable(const Bureaucrat& src) const;

	class GradeTooHighException : public std::exception
	{
	public:
		const char*	what( void ) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char*	what( void ) const throw();
	};
	class NoSignException : public std::exception
	{
	public:
		const char*	what( void ) const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& src);

#endif
