/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:31:24 by slazar            #+#    #+#             */
/*   Updated: 2023/11/12 02:21:01 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

t_inventory *Character::create_node(AMateria *tmp)
{
	t_inventory * node = new t_inventory ; 

	node ->next = NULL;
	node->save = tmp;
	return node;
}
void Character::add_to_list(t_inventory **head , t_inventory * node)
{
	t_inventory *current = NULL;

	if (*head == NULL){
		*head = node ;
		return;	
	}
	
	current = *head;
	
	while (current)
		current = current->next;
		
	current->next = node;
}

void Character::free_inventory(t_inventory	* head)
{
	t_inventory *tmp = NULL;
	t_inventory *current = head ;

	while (current)
	{
		tmp = current;
		current = current->next;
		delete tmp->save;
		delete tmp;
		tmp = NULL;
	}
	
}

Character::Character(std::string name) : _name(name)
{
	inv = NULL;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character() : _name("default")
{
	inv = NULL;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}
Character::Character(const Character &original)
{
	inv = NULL;
	*this = original;
}

Character &Character::operator=(const Character &original)
{
	if (this != &original)
	{
		this->_name = original._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = original._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	free_inventory(inv);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{	
	if (idx < 0 || idx > 3)
		return ;
	add_to_list(&inv,create_node(_inventory[idx]));
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

