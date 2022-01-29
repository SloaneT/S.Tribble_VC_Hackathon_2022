#include <iostream>
#include <string>
#include "Moon.h"

Moon::Moon()
{

}

void Moon::moonSize()
{
    std::cout << "I am the moon.  How big am I?" << std::endl;
    std::string answer;
    std::cin >> answer;
    if (answer == "Big"){std:: cout << "Correct!" <<std::endl;}
    else {std:: cout << "Wrong!" << std::endl;}
}

Moon::~Moon()
{
    //dtor
}
