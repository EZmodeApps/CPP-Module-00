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
