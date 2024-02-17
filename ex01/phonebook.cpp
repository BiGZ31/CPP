#include <iostream>
#include <string>
#include <cstring>

class Contact {
public:
    std::string name;
    std::string surname;
    std::string nickname;
    std::string number;
    std::string darkest_secret;
};

class PhoneBook {
public:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
	bool b;
    int storage;
    char cmd[512];
};

void	ft_move_contacts_down(PhoneBook& phone)
{
	int i = 0;
	while (i < 7)
	{
		phone.contacts[i] = phone.contacts[i + 1];
		i++;
	}
}

void	ft_replace_latest(PhoneBook& phone)
{
		char c;
		std::cout << "You already have 8 contacts. Do you want to replace the last one? (y/n)" << std::endl;
		std::cin >> c;
		if (c != 'y')
		{
			std::cout << "Operation canceled!" << std::endl;
			return;
		}
		ft_move_contacts_down(phone);
		std::string name, surname, nickname, number, darkest_secret;
        std::cout << "Enter your contact's name: ";
        std::cin >> name;
        std::cout << "Enter your contact's surname: ";
        std::cin >> surname;
        std::cout << "Enter your contact's nickname: ";
        std::cin >> nickname;
        std::cout << "Enter your contact's number: ";
        std::cin >> number;
        std::cout << "Enter your contact's darkest secret: ";
        std::cin >> darkest_secret;
        phone.contacts[7].name = name;
        phone.contacts[7].surname = surname;
        phone.contacts[7].nickname = nickname;
        phone.contacts[7].number = number;
        phone.contacts[7].darkest_secret = darkest_secret;
        phone.storage++;
        std::cout << "You replaced your oldest contact." << std::endl;
}

void ft_add_contact(PhoneBook& phone)
{
    if (phone.storage < PhoneBook::MAX_CONTACTS)
    {
        std::string name, surname, nickname, number, darkest_secret;
        std::cout << "Enter your contact's name: ";
        std::cin >> name;
        std::cout << "Enter your contact's surname: ";
        std::cin >> surname;
        std::cout << "Enter your contact's nickname: ";
        std::cin >> nickname;
        std::cout << "Enter your contact's number: ";
        std::cin >> number;
        std::cout << "Enter your contact's darkest secret: ";
        std::cin >> darkest_secret;
        phone.contacts[phone.storage].name = name;
        phone.contacts[phone.storage].surname = surname;
        phone.contacts[phone.storage].nickname = nickname;
        phone.contacts[phone.storage].number = number;
        phone.contacts[phone.storage].darkest_secret = darkest_secret;
        phone.storage++;
        std::cout << "You successfully created a new contact!" << std::endl;
    }
    else
		ft_replace_latest(phone);
}

void ft_search_contact(PhoneBook& book)
{
    std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     Index|      Name|   Surname|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	int i = 0;
	int j = 0;
	while (i <= 7)
	{
		std::cout << "|         " << i + 1 << "|";
		if (book.contacts[i].name.length() > 10)
			std::cout << book.contacts[i].name.substr(0, 9) << ".|";
		else
		{
			j = book.contacts[i].name.length();
			while (j < 10)
			{
				std::cout << " ";
				j++;
			}
			std::cout << book.contacts[i].name;
			std::cout << "|";
		}
		if (book.contacts[i].surname.length() > 10)
			std::cout << book.contacts[i].surname.substr(0, 9) << ".|";
		else
		{
			j = book.contacts[i].surname.length();
			while (j < 10)
			{
				std::cout << " ";
				j++;
			}
			std::cout << book.contacts[i].surname;
			std::cout << "|";
		}
		if (book.contacts[i].nickname.length() > 10)
			std::cout << book.contacts[i].nickname.substr(0, 9) << ".|";
		else
		{
			j = book.contacts[i].nickname.length();
			while (j < 10)
			{
				std::cout << " ";
				j++;
			}
			std::cout << book.contacts[i].nickname;
			std::cout << "|";
		}
		std::cout << std::endl;
		i++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "Enter the index of the contact you want to see: ";
	std::string input;
    std::cin >> input;
	i = std::stoi(input);
	if (i > 0 && i <= 8)
	{
		std::cout << "Name: " << book.contacts[i - 1].name << std::endl;
		std::cout << "Surname: " << book.contacts[i - 1].surname << std::endl;
		std::cout << "Nickname: " << book.contacts[i - 1].nickname << std::endl;
		std::cout << "Number: " << book.contacts[i - 1].number << std::endl;
		std::cout << "Darkest secret: " << book.contacts[i - 1].darkest_secret << std::endl;
	}
	else
		std::cout << "Error. Index not found." << std::endl;
}

int main(int ac, char** av)
{
    PhoneBook book;

    std::cout << "This is your awesome phonebook! Please type a command." << std::endl;
	book.b = 0;
    while (1)
    {
        std::cin >> book.cmd;
        if (strcmp(book.cmd, "ADD") == 0 || strcmp(book.cmd, "add") == 0)
			ft_add_contact(book);
        else if (strcmp(book.cmd, "SEARCH") == 0 || strcmp(book.cmd, "search") == 0)
			ft_search_contact(book);
        else if (strcmp(book.cmd, "HELP") == 0 || strcmp(book.cmd, "help") == 0)
			std::cout << "These are the only commands you can use\n ADD: adds a contact\n SEARCH: searches a contact\n EXIT: exits your phonebook\n";
        else if (strcmp(book.cmd, "EXIT") == 0 || strcmp(book.cmd, "exit") == 0)
        {
            std::cout << "Thanks, see you soon." << std::endl;
            return (0);
        }
        else
            std::cout << "Error. Command not found. Try 'HELP'" << std::endl;
    }
	return (0);
}