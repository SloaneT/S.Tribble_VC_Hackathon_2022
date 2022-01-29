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
            std::cerr << "\nThat's not the answer, according to Wikipedia! Please try again and be careful \nto input A, B or C.";
            std::cin.clear(); // reset state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // consume wrong input
    }
  }
  std::cout << "Correct!  And because solar luminosity will continue to increase over time, Earth's average temperature\
  is expected to reach 100 degrees celsius in the next 1.5 billion years, causing all of Earth's water to evaporate.\
  \n\nWhere will we live when all of Earth's water is gone?\n[ANY KEY]" << '\n';
  getch();
  return;
}



void Earth::question1(){
    std::cout <<"\nAs you continue to gaze down at Earth, your materials scanner detects a large mass floating in the Pacific Ocean.\
\n\nWhat could this be?"<<std::endl;
    std::string answer = "";
    for (;;) {
    std::cout << "\n\n\[A]The Great Wall of China\
\n[B]Andromeda\
\n[C]\"The Great Pacific Garbage Patch\"\n";
    if (std::cin >> answer && answer == "C") {
        break; // success -> bail out of loop
    }   else {
            std::cerr << "\nThat's not the answer, according to Wikipedia! Please try again and be careful \nto input A, B or C.";
            std::cin.clear(); // reset state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // consume wrong input
    }
  }
  std::cout << "Correct! A common misconception is that the Pacific Garbage patch is a great floating island, but it's not actually dense enough to\
  be seen from space.  This is because it is not so much a \"garbage patch \" as it is a massive system of microplastics combined with\
   plastic lighters, toothbrushes, water bottles, pens, baby bottles, cell phones and plastic bags.\
\n\nThe patch is estimated to increase in size 10-fold each decade, and currently contains more than 2.7 million metric tons of plastic.\n\n\[ANY]"<< std::endl;
getch();
std::cout<<"\n\nIf Earth continues to be polluted at this rate, people may wish to move to \nother, cleaner planets.\n[ANY]" << '\n';
getch();
  return;
}


#endif // EARTH_HPP
