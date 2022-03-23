/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:32:30 by caniseed          #+#    #+#             */
/*   Updated: 2022/03/23 20:32:34 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	std::string input;
	phonebook ph;
	bool run = true;

	while (run)
	{
		std::cout << "Please enter your command:" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD" || input == "add")
			ph.add_contact();
		if (input == "SEARCH" || input == "search")
			ph.search();
		if (input == "EXIT" || input == "exit")
			run = false;
	}
	return (0);
}

