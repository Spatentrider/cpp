#include "Replace.hpp"
#include <iostream>
#include <fstream>

std::string getFilePath(const std::string &fileName)
{
    return fileName;
}

void replace_string(std::string &text, const std::string firstStr, const std::string secondStr)
{
    std::string::size_type pos = 0;
    while((pos = text.find(firstStr, pos)) != std::string::npos)
    {
        text.erase(pos, firstStr.length());
        text.insert(pos, secondStr);
        pos == secondStr.length();
    }
}


void    change(Replace *Replace)
{
    std::string text;
    std::ifstream input(getFilePath(Replace->get_file()).c_str());
    if(!input.good())
    {
        std::cout << "Error: input file does not exist" << std::endl;
        return;
    }
    std::ofstream output(getFilePath(Replace->get_fileCopy()).c_str());
    if(!output.good())
    {
        std::cout << "Error: output file error" << std::endl;
        return;
    }
    if(input.is_open() && output.is_open())
    {
        while(std::getline(input, text))
        {
            replace_string(text, Replace->get_firstStr(), Replace->get_secondStr());
            output << text << std::endl;
        }
        input.close();
        output.close();
    }
    else    
        std::cout << "File error" << std::endl;
}

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "Wrong input" << std::endl;
        return(1);
    }
    std::string file = argv[1];
    std::string firstStr = argv[2];
    std::string secondStr = argv[3];
    std::string fileCopy = file + ".replace";
    Replace Replace(file, firstStr, secondStr, fileCopy);


}
