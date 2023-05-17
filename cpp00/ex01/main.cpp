#include "PhoneBook.hpp"
#include "Contact.hpp"

void add()
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
    std::cout << contact.getFirstName() << std::endl;
    std::cout << contact.getLastName() << std::endl;
    std::cout << contact.getNickname() << std::endl;
    std::cout << contact.getPhoneNumber() << std::endl;
    std::cout << contact.getDarkestSecret() << std::endl;
}




int main()
{
    std::string command;
    //PhoneBook phoneBook;

    while(1)
    {
        std::cin >> command;
        if(command.compare("ADD") == 0)
        {
            add(); 
        }
        else if(command.compare("SEARCH") == 0)
        {
            //search();
        }
        else if(command.compare("EXIT") == 0)
        {
            break;
        }
        else
        {
            std::cout << "ERROR" << std::endl;
        }
    }
    return(0);

}