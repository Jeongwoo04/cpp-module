/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:28:49 by jeson             #+#    #+#             */
/*   Updated: 2022/02/17 15:16:49 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

// (Required grades: sign 72, exec 45). Action: Makes some
// drilling noises, and tell us that <target> has been robotomized successfully 50% of
// the time. Otherwise, tell us it’s a failure.

# include "Form.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public Form
{
private:
	std::string	target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm( std::string str );
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& src);

	RobotomyRequestForm& operator=(const RobotomyRequestForm& src);

	void	execute(const Bureaucrat& executor) const;
};

#endif
