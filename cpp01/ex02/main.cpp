#include <string>
#include <iostream>

int main()
{
    std::string zombie = "HI THIS IS BRAIN";

    std::string *stringPTR = &zombie;
    std::string &stringREF = zombie;

    std::cout << "address of zombie is: " << &zombie << std::endl;
    std::cout << "address of stringPTR is: " << stringPTR << std::endl;
    std::cout << "address of stringREF is: " << &stringREF << std::endl;
    std::cout << "value of zombie is: " <<  zombie << std::endl;
    std::cout << "value of stringPTR is: " << *stringPTR << std::endl;
    std::cout << "value of stringREF is: " << stringREF << std::endl;
    
    return 0;
}