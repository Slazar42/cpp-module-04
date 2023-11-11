/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:08:25 by slazar            #+#    #+#             */
/*   Updated: 2023/11/10 18:15:29 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(){
	const Animal *Animals[6];
	std::cout << std::endl;
	for(int i = 0; i < 6; i++){
		if (i < 3){
			Animals[i] = new Dog();
			
		}
		else
			Animals[i] = new Cat();
	}
	std::cout << std::endl;
	for(int i = 0; i < 6; i++){
		Animals[i]->makeSound();
	}
	std::cout << std::endl;
	for(int i = 0; i < 6; i++){
		delete Animals[i];
	}
	std::cout << std::endl;
	Cat *cat1 = new Cat();
	cat1->getBrain().setIdea(0, "Idea 0");
	Cat *cat2 = new Cat(*cat1);
	delete cat1;
	std::cout << "cat2->getBrain().getIdea(0) : " << cat2->getBrain().getIdea(0) << std::endl;
	delete cat2;
	// system("leaks Brain");
}