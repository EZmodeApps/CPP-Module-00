#include "contact.hpp"

Contact::Contact() : id(0)  {
//	std::cout << "privet\n";
}

Contact::~Contact() {
//	std::cout << "poka\n";
}


void	Contact::showContact(void)
{
	std::cout << "|" << std::setw(10) << id;
	for (int i = 0; i < 3; i++) // 3 - wtf
	{
		if (info[i].size() > 10)
			std::cout << "|" << info[i].substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << info[i];

	}
	std::cout << "|" << std::endl;
}

bool Contact::setContact(int index) {
	if (index > 3) // 8
		id = 0;
	else
		id = index;
	std::getline(std::cin, info[0]);
	for (int i = 0; i <= 2; i++)
	{
		if (i == 0)
			std::cout << "Enter name: ";
		else if (i == 1)
			std::cout << "Enter last name: ";
		else if (i == 2)
			std::cout << "Enter nickname: ";
		std::getline(std::cin, info[i]);
		if (info[i].empty() == 1)
			return (false);
	}
	return (true);
}
