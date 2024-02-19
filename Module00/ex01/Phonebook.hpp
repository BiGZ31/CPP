#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook {
public:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
	bool b;
    int storage;
    char cmd[512];
};

#endif