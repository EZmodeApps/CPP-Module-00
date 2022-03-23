#include "contact.hpp"

Contact::Contact() : id(0)  {}

Contact::~Contact() {}


void	Contact::showContact(void)
{
	std::cout << "|" << std::setw(10) << id;
	for (int i = 0; i < 3; i++) // 5
	{
		if (info[i].length() > 10)
			std::cout << "|" << info[i].substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << info[i];

	}
	std::cout << "|" << std::endl;
}

bool Contact::setContact(int index) {
		id = index;
	for (int i = 0; i <= 2; i++)
	{
		if (i == 0)
		{
			std::cout << "Enter name: ";
			std::getline(std::cin, info[i]);

		}
		if (i == 1)
		{
			std::cout << "Enter last name: ";
			std::getline(std::cin, info[i]);
		}
		else if (i == 2)
		{
			std::cout << "Enter nickname: ";
			std::getline(std::cin, info[i]);
		}
		if (info[i].empty() == 1)
		{
			return (false);
		}
//		std::cin.clear();
	}
	return (true);
}
