#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include "contact.hpp"

class phonebook {

public:
	phonebook(void);
	~phonebook(void);
	void add_contact(void);
	void search(void);
private:
	int amount;
	int index;
	Contact contacts[3];
};



#endif
