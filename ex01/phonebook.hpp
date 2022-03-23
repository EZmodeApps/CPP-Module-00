/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:32:15 by caniseed          #+#    #+#             */
/*   Updated: 2022/03/23 20:32:17 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include "contact.hpp"

class phonebook {

public:
	phonebook();
	~phonebook();
	void add_contact();
	void search();

private:
	int amount;
	int index;
	Contact contacts[8];
};



#endif
