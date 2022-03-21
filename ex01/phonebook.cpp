#include "phonebook.hpp"

phonebook::phonebook() : id(0) {}

phonebook::~phonebook() {}

void phonebook::add_contact(void)
{
	if (contacts[id].setContact()) //если строка не пустая то увеличиваем счетчик
		id++;
}

void 	phonebook::search(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}