/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:17:50 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 21:13:26 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog& src);
	~Dog();
	Dog& operator=(const Dog& src);

	void	makeSound( void )const;
	void	setBrainIdeas( std::string *ideas, int size );
	std::string*	getBrainIdeas( void );
	int	getBrainSize( void );
	void	printf_dog_ideas( void );
};

#endif
