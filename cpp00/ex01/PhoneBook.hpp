#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    public:

        PhoneBook(void);
        ~PhoneBook(void);

        void addContact(Contact contact);
        int getIndexOld() const;
        void displayContact();
 
    private:
        Contact contact[9];

        int _indexOld;
};

#endif