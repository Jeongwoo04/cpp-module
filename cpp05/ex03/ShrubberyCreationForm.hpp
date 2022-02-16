/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:29:21 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 13:01:15 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

// (Required grades: sign 145, exec 137). Action: Create
// a file called <target>_shrubbery, and write ASCII trees inside it, in the current
// directory.

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;
	void	printTree(std::string target) const;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm( std::string str );
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& src);

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);

	void	execute(const Bureaucrat& executor) const;
};

#endif
