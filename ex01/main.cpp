#include "phonebook.hpp"

int	main(int argc, char **argv)
{
	std::string input;
	phonebook ph;

//	while (true) {
		std::cout << "Please enter your command " << std::endl;
		std::cin >> input;
		std::cout << "u entered " << input << std::endl;
		if (input == "ADD" || input == "add") {
			ph.add_contact();
			std::cout << "123\n" << std::endl << std::endl;

		}
		if (input == "SEARCH" || input == "search")
			ph.search();
//	}
}

