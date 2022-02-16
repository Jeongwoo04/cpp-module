/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:28:09 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 11:59:14 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm( std::string str );
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& src);

	PresidentialPardonForm& operator=(const PresidentialPardonForm& src);

	void	execute(const Bureaucrat& executor) const;
};

#endif
