#include "PhoneBook.hpp"
#include "Contact.hpp"

void add(PhoneBook *phonebook)
{
    Contact contact;
    std::string line;

    std::cout << "input first name: " << std::endl;
    std::cin >> line;
    contact.setFirstName(line);
    std::cout << "input last name: " << std::endl;
    std::cin >> line;
    contact.setLastName(line);
    std::cout << "input nickname: " << std::endl;
    std::cin >> line;
    contact.setNickname(line);
    std::cout << "input phone number: " << std::endl;
    std::cin >> line;
    contact.setPhoneNumber(line);
    std::cout << "input darkest secret: " << std::endl;
    std::cin >> line;
    contact.setDarkestSecret(line);
    phonebook->addContact(contact);
    // std::cout << contact.getFirstName() << std::endl;
    // std::cout << contact.getLastName() << std::endl;
    // std::cout << contact.getNickname() << std::endl;
    // std::cout << contact.getPhoneNumber() << std::endl;
    // std::cout << contact.getDarkestSecret() << std::endl;
}

void search(PhoneBook *Phonebook)
{
    Phonebook->displayContact();
}




int main()
{
    std::string command;
    PhoneBook PhoneBook;

    while(1)
    {
        std::cout << "Input ADD, SEARCH or EXIT: " << std::endl;
        std::cin >> command;
        if(std::cin.eof())
            break;
        if(command.compare("ADD") == 0)
        {
            add(&PhoneBook); 
        }
        else if(command.compare("SEARCH") == 0)
        {
            if(PhoneBook.getIndexOld() != 0)
                search(&PhoneBook);
            else
            std::cout << "ERROR" << std::endl;
        }
        else if(command.compare("EXIT") == 0)
        {
            std::cout << "exit" << std::endl;
            return(0);
        }
        else
        {
            std::cout << "ERROR" << std::endl;
        }
    }
    std::cout << "ERROR" << std::endl;
    return(0);

}