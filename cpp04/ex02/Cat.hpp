/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:18:45 by jeson             #+#    #+#             */
/*   Updated: 2022/02/14 16:09:41 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat& src);
	~Cat();
	Cat& operator=(const Cat& src);

	void	makeSound( void )const;
	void	setBrainIdeas( std::string *ideas, int size );
	std::string*	getBrainIdeas( void );
	int	getBrainSize( void );
};

#endif
