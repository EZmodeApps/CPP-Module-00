/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caniseed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:32:00 by caniseed          #+#    #+#             */
/*   Updated: 2022/03/23 20:32:02 by caniseed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_00_CONTACT_H
#define CPP_MODULE_00_CONTACT_H

#include <iostream>
# include <iomanip>
#include <string>

class Contact {

public:
	Contact();
	~Contact();
	bool setContact(int index);
	void showContacts();
	void showContact();

private:
	int id;
	std::string info[6];
};


#endif
