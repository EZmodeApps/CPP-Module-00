#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include "contact.hpp"

class phonebook {

public:
	phonebook(void);

	~phonebook(void);
//	search();
//	add();
//	exit();
	void add_contact(void);
	void search(void);
private:
	int index;
	Contact contacts[8];
};



#endif
