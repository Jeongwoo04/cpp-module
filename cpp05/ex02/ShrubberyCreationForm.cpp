/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:29:49 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 22:31:12 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

#define S_NAME "ShrubberyCreation"
#define S_SIGN 145
#define S_EXEC 137

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string str )
: Form(S_NAME, S_SIGN, S_EXEC), target( str )
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
: Form(S_NAME, S_SIGN, S_EXEC), target( src.target )
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	if ( this == &src )
		return ( *this );
	this->target = src.target;
	return ( *this );
}

void	ShrubberyCreationForm::printTree(std::string target) const
{
	const char* tree = "\
       ###\n\
      #o###\n\
    #####o###\n\
   #o#\\#|#/###\n\
    ###\\|/#o#\n\
     # }|{  #\n\
       }|{\n";

	std::ofstream	fout(target);
	if (!fout.is_open())
	{
		std::cerr << "file is not open." << std::endl;
		return ;
	}
	fout << tree;
	fout.close();
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	Form::checkExecutable(executor);
	printTree(target + "_shrubbery");
	std::cout << this->target << " created tree." << std::endl;
}
