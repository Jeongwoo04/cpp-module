/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:03:51 by jeson             #+#    #+#             */
/*   Updated: 2022/02/15 14:09:19 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string	type;

public:
	Cure();
	Cure(const Cure& src);
	~Cure();
	Cure&	operator=(const Cure& src);

	AMateria* clone() const;
	void use(ICharacter& src);
};

#endif
