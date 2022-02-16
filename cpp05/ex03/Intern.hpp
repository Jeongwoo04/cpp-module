/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:31:55 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 14:13:40 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern;

typedef struct s_form{
	std::string	formname;
	Form*	(Intern::*getForm)(std::string target);
}	t_form;

class Intern
{
public:
	Intern();
	Intern(const Intern& src);
	~Intern();
	Intern&	operator=(const Intern& src);

	Form*	getPForm( std::string target );
	Form*	getRForm( std::string target );
	Form*	getSForm( std::string target );
	Form*	makeForm( std::string formname, std::string formtarget );

	class	CannotFoundFormException : public std::exception
	{
	public:
		const char*	what() const throw();
	};
};

#endif
