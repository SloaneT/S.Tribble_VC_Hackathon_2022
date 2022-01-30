#ifndef DEEPER_HPP
#define DEEPER_HPP
#include <iostream>
#include <string>
#include <conio.h>
#include <limits>


class Deeper
{
    public:
        Deeper(){};
        virtual ~Deeper(){};
        void intro();
        void distance();
        void hubble();

    protected:

    private:
};

void Deeper::intro(){
std::cout<< "Mars, interplanetary colonization, that's all well and good.  But what lies even further beyond,\
in deeper reaches of our mortal confines?  We are about to find out.\
\n\n[ANY KEY]" << std::endl;
getch();

std::cout<<"\n\nThe James Webb Space Telescope, the largest and most powerful\
space observatory \nin history, reached its final destination on\
 Monday, January 24th, 2022.\n\n[ANY KEY]" << std::endl;
getch();
}

void Deeper::distance(){
        std::cout <<"\n\nThe James Webb Space Telescope is positioned at Lagrange Point 2. \nHow far is this from Earth?" <<std::endl;
    std::string answer = "";
    for (;;) {
    std::cout << "\n\n\[A] 10,000 miles\
\n[B] 100,000 miles\
\n[C] 1,000,000 miles\n";
    if (std::cin >> answer && answer == "C") {
        break; // success -> bail out of loop
    }   else {
            std::cerr << "\nThat's not the answer, according to motherboard.vice.com! Please try again and be careful \nto input A, B or C.";
            std::cin.clear(); // reset state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // consume wrong input
    }
  }
  std::cout << "\n\nOne million miles! Furthermore, this telescope is 100 times more sensitive\
 than the Hubble Space telescope. \n\n[ANY KEY]" << std::endl;
  getch();
  return;
}

void Deeper::hubble(){
      std::cout <<"\n\nWith that kind of sensitivity, how far can the JWST see?" <<std::endl;
    std::string answer = "";
    for (;;) {
    std::cout << "\n\n\[A] 1 million light years\
\n[B] 500 million light years\
\n[C] 15 billion light years\n";
    if (std::cin >> answer && answer == "C") {
        break; // success -> bail out of loop
    }   else {
            std::cerr << "\nThat's not the answer, according to NASA! Please try again and be careful \nto input A, B or C.";
            std::cin.clear(); // reset state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // consume wrong input
    }
  }
  std::cout << "\n\n15. Billion. Light years. With that kind of sensitivity, the JWST will be able \nto\
 see what the universe looked like around 100 million years after the Big Bang\n\
, when the first stars and galaxies were born.[ANY KEY]" << std::endl;
  getch();
  return;
}

#endif // DEEPER_HPP
