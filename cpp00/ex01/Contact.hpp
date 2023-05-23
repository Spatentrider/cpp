#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class Contact
{
    private:

    std::string _firstName;
    std::string _nickname;
    std::string _lastName;
    std::string _phoneNumber;
    std::string _darkestSecret;




    public:

    Contact(void);
    ~Contact(void);

    std::string getFirstName() const;
    std::string getNickname() const;
    std::string getLastName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret () const;
    void setFirstName(std::string command);
    void setNickname(std::string command);
    void setLastName(std::string command);
    void setPhoneNumber(std::string command);
    void setDarkestSecret(std::string command);

};

#endif