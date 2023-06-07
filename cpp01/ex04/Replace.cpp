#include "Replace.hpp"

Replace::Replace(std::string file, std::string firstStr, std::string secondStr, std::string fileCopy) : _file(file), _firstStr(firstStr), _secondStr(secondStr), _fileCopy(fileCopy){}

Replace::~Replace(){}

std::string Replace::get_file() const
{
    return this->_file;
}

std::string Replace::get_firstStr() const
{
    return this->_firstStr;
}

std::string Replace::get_secondStr() const
{
    return this->_secondStr;
}

std::string Replace::get_fileCopy() const
{
    return this->_fileCopy;
}