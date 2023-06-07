#ifndef REPlACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>

class Replace
{
    private:

    std::string _file;
    std::string _firstStr;
    std::string _secondStr;
    std::string _fileCopy;

    public:

    Replace(std::string file, std::string firstStr, std::string secondStr, std::string fileCopy);
    ~Replace();
    std::string get_file() const;
    std::string get_firstStr() const;
    std::string get_secondStr() const;
    std::string get_fileCopy() const;
};

#endif