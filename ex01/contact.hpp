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
	void showContact();

private:
	int id;
	std::string fields_info[5];//cами поля
	std::string info[5];
	enum info {
		first_name = 0,
		last_name,
		nickname,
		phone,
		darkest_secret
	};
};


#endif
