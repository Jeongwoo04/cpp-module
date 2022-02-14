/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:04:54 by jeson             #+#    #+#             */
/*   Updated: 2022/02/14 13:19:48 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(const Animal& src);
	virtual ~Animal();
	Animal& operator=(const Animal& src);

	std::string	getType( void )const;
	virtual void	makeSound( void )const;
};

#endif
