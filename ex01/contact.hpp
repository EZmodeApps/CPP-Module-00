#ifndef CPP_MODULE_00_CONTACT_H
#define CPP_MODULE_00_CONTACT_H

#include "phonebook.hpp"

class Contact {

public:
	Contact(void);
	~Contact(void);

private:
	char *name;
	char *last_name;
	char *nick;
	char *phone;
	char *secret;
};


#endif
