#include "phonebook.hpp"

phonebook::phonebook() : index(0), amount(0) {}

phonebook::~phonebook() {}

void phonebook::add_contact(void)
{
	if (index == 2) //8
		index = 0;
	bool result = contacts[index].setContact(index);
	if (!result)
	{
		std::cout << "Error: contact can't be empty!" << std::endl;
		return;
	}
	if (result && amount < 2)
	{
		amount++;
		index++;
	}
	else
		index++;
}

void 	phonebook::search(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < amount; i++) {
		contacts[i].showContact();
	}
}