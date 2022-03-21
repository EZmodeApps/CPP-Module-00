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
	std::cout << "|" << std::setw(10) << info[0];
	std::cout << "|" << std::setw(10) << info[1];
	std::cout << "|" << std::setw(10) << info[2];
	std::cout << std::endl;
}

bool Contact::setContact(int index) {
	id = index;

	std::getline(std::cin, info[0]);
//	std::getline(std::cin, info[2]);
	for (int i = 0; i <= 2; i++)
		std::getline(std::cin, info[i]);
//	for (int i = first_name; i <= 2; i++)
//		std::cout << info[i] << std::endl;
	//if длина строки == 0 то false
	return (true);
}
