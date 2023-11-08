/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:08:25 by slazar            #+#    #+#             */
/*   Updated: 2023/11/07 01:36:14 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){
	const Animal* meta = new Animal("salah");
	const Animal* j = new Dog("chiba");
	const Animal* i = new Cat("khalil");
	
	std::cout << std::endl;
	std::cout << "meta->getType() : " << meta->getType() << std::endl;
	std::cout << "j->getType() : " << j->getType() << std::endl;
	std::cout << "i->getType() : " << i->getType() << std::endl;
	std::cout << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	
// 	delete meta;
// 	delete j;
// 	delete i;
}