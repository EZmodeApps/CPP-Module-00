/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:32:10 by caniseed          #+#    #+#             */
/*   Updated: 2022/03/23 20:32:11 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook() : index(0), amount(0) {}

phonebook::~phonebook() {}

void phonebook::add_contact()
{
	if (index == 8)
		index = 0;
	bool result = contacts[index].setContact(index);
	if (!result)
	{
		std::cerr << "Error: contact can't be empty!" << std::endl;
		return ;
	}
	if (result && amount < 8)
	{
		amount++;
		index++;
	}
	else
		index++;
}

void 	phonebook::search()
{
	std::string input;
	int num;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < amount; i++) {
		contacts[i].showContacts();
	}
	while (1)
	{
		std::cout << "Enter contact's index to display additional information: ";
		getline(std::cin,input);
		if (input == "exit" || input == "EXIT")
			return ;
		try {
			num = std::stoi(input);
		}
		catch (const std::exception &e) {
			num = -1;
		}
		if (num >= 0 && num <= 8 && num < amount) {
			contacts[num].showContact();
			return ;
		}
		else
			std::cerr << "Error: wrong index!" << std::endl;
	}
}
