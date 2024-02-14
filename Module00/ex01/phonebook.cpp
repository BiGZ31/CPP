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
    int storage;
    char cmd[512];
};

void	ft_replace_last(PhoneBook& phone)
{
		char c;
		std::cout << "You already have 8 contacts. Do you want to replace the last one? (y/n)" << std::endl;
		std::cin >> c;
		if (c != 'y')
		{
			std::cout << "Operation canceled!" << std::endl;
			return;
		}
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
        std::cout << "You replaced your last contact." << std::endl;
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
		ft_replace_last(phone);
}

void ft_search_contact(const PhoneBook& book)
{
    std::string searchName;
    std::cout << "Please enter the contact name: ";
    std::cin >> searchName;
	int i = 0;
	while(i < book.storage)
	{
		if (book.contacts[i].name == searchName)
        {
            std::cout << "Contact found!" << std::endl;
            std::cout << "Name: " << book.contacts[i].name << std::endl;
            std::cout << "Surname: " << book.contacts[i].surname << std::endl;
            std::cout << "Nickname: " << book.contacts[i].nickname << std::endl;
            std::cout << "Number: " << book.contacts[i].number << std::endl;
            std::cout << "Darkest Secret: " << book.contacts[i].darkest_secret << std::endl;
            return;
        }
		i++;
	}
    std::cout << "Contact not found!" << std::endl;
}

int main(int ac, char** av)
{
    PhoneBook book;

    std::cout << "This is your awesome phonebook! Please type a command." << std::endl;
    while (1)
    {
        std::cin >> book.cmd;
        if (strcmp(book.cmd, "ADD") == 0)
            ft_add_contact(book);
        else if (strcmp(book.cmd, "SEARCH") == 0)
            ft_search_contact(book);
        else if (strcmp(book.cmd, "HELP") == 0)
            std::cout << "These are the only commands you can use\n ADD: adds a contact\n SEARCH: searches a contact\n EXIT: exits your phonebook\n";
        else if (strcmp(book.cmd, "EXIT") == 0)
        {
            std::cout << "Thanks, see you soon." << std::endl;
            return (0);
        }
        else
            std::cout << "Error. Command not found. Try 'HELP'" << std::endl;
    }
}