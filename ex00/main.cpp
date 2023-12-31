/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:08:25 by slazar            #+#    #+#             */
/*   Updated: 2023/11/10 15:02:05 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(){
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	const Animal* meta = new Animal();
	
	std::cout << std::endl;
	std::cout << "meta->getType() : " << meta->getType() << std::endl;
	std::cout << "j->getType() : " << j->getType() << std::endl;
	std::cout << "i->getType() : " << i->getType() << std::endl;
	std::cout << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
}