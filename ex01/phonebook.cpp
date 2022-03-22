#include "phonebook.hpp"

phonebook::phonebook() : index(0) {}

phonebook::~phonebook() {}

void phonebook::add_contact(void)
{
	if (contacts[index].setContact(index) && index <= 8) //если строка не пустая то увеличиваем счетчик
		index++;
//	else if (contacts[index].setContact(index) && index == 8)
//		index = 0;
}

void 	phonebook::search(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < index; i++)
		contacts[i].showContact();
}