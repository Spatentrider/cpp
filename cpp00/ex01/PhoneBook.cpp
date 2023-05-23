#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _indexOld(0)
{
    
}

PhoneBook::~PhoneBook(void)
{

}

void PhoneBook::addContact(Contact cont)
{
    int index = _indexOld % 8;
    contact[index] = cont;
    _indexOld++;
}

int PhoneBook::getIndexOld() const
{
    return(this->_indexOld);
}

void PhoneBook::displayContact() 
{
    int i = -1;
    std::cout << std::right << std::setw(10) << "index" << " | "  << std::right << std::setw(10) << "First name" << " | " << std::right << std::setw(10) << "Last name" << " | " << std::right << std::setw(10) << "Nickname" << std::endl;
    while(!contact[++i].getFirstName().empty())
    {
        std::string Firstname = contact[i].getFirstName();
        if(Firstname.length() >= 9)
            Firstname[9] = '.';
        std::string Lastname = contact[i].getLastName();
        if(Lastname.length() >= 9)
            Lastname[9] = '.';
        std::string Nickname = contact[i].getNickname();
        if(Nickname.length() >= 9)
            Nickname[9] = '.';
        std::cout << std::right << std::setw(10) << i + 1 << " | " << std::right << std::setw(10) << Firstname.substr(0, 10) <<  " | " << std::right << std::setw(10) << Lastname.substr(0, 10) << " | " << std::right << std::setw(10) << Nickname.substr(0, 10) << std::endl;
    }
    std::cout << "Input index: " << std::endl;
    i = -1;
    std::string j;
    std::cin >> j; 
    while(j[++i])
    {
        if(!std::isdigit(j[i]) || j[i] < 1 || j[i] > 9)
        {

            std::cout << "Invalid index" << std::endl;
            return;
        }
    }
    if(!contact[atoi(j.c_str())].getFirstName().empty())
    {
        std::cout << contact[atoi(j.c_str())].getFirstName() << std::endl;
        std::cout << contact[atoi(j.c_str())].getLastName() << std::endl;
        std::cout << contact[atoi(j.c_str())].getNickname() << std::endl;
        std::cout << contact[atoi(j.c_str())].getPhoneNumber() << std::endl;
        std::cout << contact[atoi(j.c_str())].getDarkestSecret() << std::endl;    
    }
}    