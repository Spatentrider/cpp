#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

std::string Contact::getFirstName() const
{
    return(this->_firstName);
}

std::string Contact::getLastName() const
{
    return(this->_lastName);
}

std::string Contact::getNickname() const
{
    return(this->_nickname);
}

std::string Contact::getPhoneNumber() const
{
    return(this->_phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
    return(this->_darkestSecret);
}

void Contact::setFirstName(std::string command)
{
    this->_firstName = command;
}

void Contact::setLastName(std::string command)
{
    this->_lastName = command;
}

void Contact::setNickname(std::string command)
{
    this->_nickname = command;
}

void Contact::setPhoneNumber(std::string command)
{
    this->_phoneNumber = command;
}

void Contact::setDarkestSecret(std::string command)
{
    this->_darkestSecret = command;
}