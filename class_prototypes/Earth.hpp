#ifndef EARTH_HPP
#define EARTH_HPP
#include <iostream>
#include <string>
#include <conio.h>
#include <limits>




class Earth
{
    public:
        Earth(){};

        void introduction();
        void question1();

        virtual ~Earth(){};

    protected:

    private:
};

void Earth::introduction(){

    std::cout <<"You are now looking down on Earth.  How old is Earth, anyway?"<<std::endl;
    std::string answer = "";
    for (;;) {
    std::cout << "\n\n\[A] Approx. 4.5 billion years\
\n[B] Approx. 2.8 billion years\
\n[C] Approx. 800 million years\n";
    if (std::cin >> answer && answer == "A") {
        break; // success -> bail out of loop
    }   else {
            std::cerr << "\nThat's not the answer, according to Wikipedia! Please try again.";
            std::cin.clear(); // reset state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // consume wrong input
    }
  }
  std::cout << "Great job!" << '\n';
  return;
}



void Earth::question1(){

}

#endif // EARTH_HPP
