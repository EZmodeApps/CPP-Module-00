#include "phonebook.hpp"

int	main(void)
{
	std::string input;
	phonebook ph;
	bool run = true;

	while (run)
	{
		std::cout << "Please enter your command:" << std::endl;
//		std::cin >> input;
		std::getline(std::cin, input);
		if (input == "ADD" || input == "add")
			ph.add_contact();
		if (input == "SEARCH" || input == "search")
			ph.search();
		if (input == "EXIT" || input == "exit")
			run = false;
//		else
//			std::cout << "Error: wrong command!" << std::endl;
	}
	return (0);
}

