#include <iostream>
#include <string>
#include "Moon.h"



int main()
{
    std::cout << "Greetings, planet walker.  What is your name?" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Okay, " << name << ".  You have " << std::endl;

    Moon moonObj;
    moonObj.moonSize();
    return 0;
}
