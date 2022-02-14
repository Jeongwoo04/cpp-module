/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:03:42 by jeson             #+#    #+#             */
/*   Updated: 2022/02/14 13:33:54 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	{
		Animal* animal = new Animal();
		Animal* dog = new Dog();
		Animal* cat = new Cat();

		std::cout << std::endl;

		std::cout << "Animal's type : " << animal->getType() << std::endl;
		animal->makeSound();

		std::cout << std::endl;

		std::cout << "Dog's type : " << dog->getType() << std::endl;
		dog->makeSound();

		std::cout << std::endl;

		std::cout << "Cat's type : " << cat->getType() << std::endl;
		cat->makeSound();

		std::cout << std::endl;

		delete animal;
		delete dog;
		delete cat;
		std::cout << std::endl;
	}
	{
		WrongAnimal* animal = new WrongAnimal();
		WrongAnimal* cat = new WrongCat();

		std::cout << std::endl;

		std::cout << "WrongAnimal's type : " << animal->getType() << std::endl;
		animal->makeSound();

		std::cout << std::endl;

		std::cout << "WrongCat's type : " << cat->getType() << std::endl;
		cat->makeSound();

		std::cout << std::endl;

		delete animal;
		delete cat;
	}
	return ( 0 );
}
