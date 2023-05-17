#include <iostream>

int main(int argc, char **argv)
{
    int j = 0;

    if(argc == 1)
    {
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    while(argv[++j])
    {
       int i = -1;
        while(argv[j][++i])
        {
            // char str = (char) toupper(argv[j][i]);
            std::cout << (char) toupper(argv[j][i]);                
        }
    }
    std::cout << std::endl;
    return 0;
}