#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
public:
	Contact() {} // Constructor implementation

	// Member functions implementation
	void set_name(std::string name) { this->name = name; }
	void set_surname(std::string surname) { this->surname = surname; }
	void set_nickname(std::string nickname) { this->nickname = nickname; }
	void set_number(std::string number) { this->number = number; }
	void set_darkest_secret(std::string darkest_secret) { this->darkest_secret = darkest_secret; }
	void set_contact(std::string name, std::string surname, std::string nickname, std::string number, std::string darkest_secret) {
		set_name(name);
		set_surname(surname);
		set_nickname(nickname);
		set_number(number);
		set_darkest_secret(darkest_secret);
	}
	std::string get_name() { return this->name; }
	std::string get_surname() { return this->surname; }
	std::string get_nickname() { return this->nickname; }
	std::string get_number() { return this->number; }
	std::string get_darkest_secret() { return this->darkest_secret; }
	int get_nickname_length() { return this->nickname.length(); }
	int get_name_length() { return this->name.length(); }
	int get_surname_length() { return this->surname.length(); }
private:
    std::string name;
    std::string surname;
    std::string nickname;
    std::string number;
    std::string darkest_secret;
};

#endif
