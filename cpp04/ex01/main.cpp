/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:03:42 by jeson             #+#    #+#             */
/*   Updated: 2022/02/14 17:02:39 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void	printf_dog_ideas( Dog& dog )
{
	std::string*	dog_ideas = dog.getBrainIdeas();
	int	size = dog.getBrainSize();

	for (int i = 0; i < size; i++)
		std::cout << "ideas[ "<< i << " ] : "<< dog_ideas[i] << std::endl;
}

void	printf_cat_ideas( Cat& cat )
{
	std::string*	cat_ideas = cat.getBrainIdeas();
	int	size = cat.getBrainSize();

	for (int i = 0; i < size; i++)
		std::cout << "ideas[ "<< i << " ] : "<< cat_ideas[i] << std::endl;
}

int	main( void )
{
	Animal *animal[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		std::cout << "animal [ " << i << " ] created. type : " << animal[i]->getType() << std::endl << std::endl;
	}
	std::cout << std::endl;

	for(int i = 0; i < 10; i++)
	{
		delete animal[i];
		std::cout << "animal [ " << i << " ] destroyed. type : " << animal[i]->getType() << std::endl << std::endl;
	}

	std::string ideas1[3] = {"42", "hello", "world"};
	std::string ideas2[4] = {"42", "hello", "gaepo", "world"};

	Dog dog = Dog();
	std::cout << std::endl;
	Cat cat = Cat();
	std::cout << std::endl;
	dog.setBrainIdeas( ideas1, 3 );
	cat.setBrainIdeas( ideas2, 4 );
	printf_dog_ideas(dog);
	std::cout << std::endl;
	printf_cat_ideas(cat);

	std::cout << "\ncopy ->\n" << std::endl;
	Dog cp_dog = dog;
	Cat cp_cat = cat;
	std::cout << std::endl;
	printf_dog_ideas(cp_dog);
	std::cout << std::endl;
	printf_cat_ideas(cp_cat);
	std::cout << std::endl;
	return ( 0 );
}
