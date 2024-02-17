#include <string.h>
#include <unistd.h>
#include <iostream>
#include <string>

class Contact {
public:
	Contact();
	~Contact();
	void set_name(std::string name)
	{
		this->name = name;
	}
	void set_surname(std::string surname)
	{
		this->surname = surname;
	}
	void set_nickname(std::string nickname)	
	{
		this->nickname = nickname;
	}
	void set_number(std::string number)
	{
		this->number = number;
	}
	void set_darkest_secret(std::string darkest_secret)
	{
		this->darkest_secret = darkest_secret;
	}
	std::string get_name(void)
	{
		return (this->name);
	}
	int get_name_length(void)
	{
		return (this->name.length());
	}
	void set_contact(std::string name, std::string surname, std::string nickname, std::string number, std::string darkest_secret)
	{
		set_name(name);
		set_surname(surname);
		set_nickname(nickname);
		set_number(number);
		set_darkest_secret(darkest_secret);
	}
	void print_contact();
private:
    std::string name;
    std::string surname;
    std::string nickname;
    std::string number;
    std::string darkest_secret;
};