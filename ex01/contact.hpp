#ifndef CPP_MODULE_00_CONTACT_H
#define CPP_MODULE_00_CONTACT_H

#include <iostream>
# include <iomanip>
#include <string>

class Contact {

public:
	Contact();
	~Contact();
	bool setContact();
//	void printw(void);

private:
	std::string fields_info[5];//cами поля
	std::string info[5];
	enum info {
		first_name = 0,
		last_name,
		nickname,
		phone,
		darkest_secret
	};
//	std::string name;
//	char *last_name;
//	char *nick;
//	char *phone;
//	char *secret;
};


#endif
