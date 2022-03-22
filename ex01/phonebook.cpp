#include "phonebook.hpp"

phonebook::phonebook() : index(-1), amount(0) {}

phonebook::~phonebook() {}

void phonebook::add_contact(void)
{
		//std::cin.clear();
		index++;
//	bool result = contacts[++index].setContact(index);
	if (index > 2) //8
		index = 0;
	contacts[index].setContact(index); //если строка не пустая то увеличиваем счетчик
//	if (contacts[index].setContact(index) && index > 8) {
//		index = 0;
//	}
//	else
//		std::cout << "Error: contact can't be empty!" << std::endl;
}

void 	phonebook::search(void)
{
	std::cin.clear();
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i <= amount; i++) { //amount
		contacts[i].showContact();
//		std::cout << i << std::endl;
	}
//	std::cout << "index - "<< index << std::endl;
}