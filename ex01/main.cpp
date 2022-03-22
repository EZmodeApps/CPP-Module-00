#include "phonebook.hpp"

int	main(int argc, char **argv)
{
	std::string input;
	phonebook ph;

	while (true)
	{
		std::cout << "Please enter your command:" << std::endl;
		std::cin >> input;
		if (input == "ADD" || input == "add")
			ph.add_contact();
		if (input == "SEARCH" || input == "search")
			ph.search();
		if (input == "EXIT" || input == "exit")
			return (0);
	}
	return (0);
}

