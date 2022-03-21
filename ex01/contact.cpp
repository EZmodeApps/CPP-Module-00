#include "contact.hpp"

Contact::Contact() {
//	std::cout << "privet\n";
}

Contact::~Contact() {
//	std::cout << "poka\n";
}


bool Contact::setContact() {
	for (int i = first_name; i <= darkest_secret; i++)
		std::getline(std::cin, info[i]);
	for (int i = first_name; i <= darkest_secret; i++)
		std::cout << info[i] << std::endl;
	//if длина строки == 0 то false
	return (true);
}

//void Contact::printw(void) {
//	std::cout << "1111111111\n";
//}