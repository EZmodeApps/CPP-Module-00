/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:28:59 by caniseed          #+#    #+#             */
/*   Updated: 2022/03/23 20:29:07 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string arg(argv[i]);
			for (int j = 0; j < (int)arg.length(); j++)
			{
				if (arg[j] >= 'a' && arg[j] <= 'z')
					std::cout << (char)toupper(arg[j]);
				else
					std::cout << arg[j];
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
