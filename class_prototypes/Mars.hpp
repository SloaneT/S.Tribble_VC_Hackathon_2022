#ifndef MARS_HPP
#define MARS_HPP
#include <iostream>
#include <string>
#include <conio.h>
#include <limits>

class Mars
{
    public:
        Mars();
        void intro();
        void facts();
        virtual ~Mars();

    protected:

    private:
};

void Mars::intro(){
    std::cout << "As you delve further into the dark depths of the universe, \nyou come across a little planet that goes by the name of Mars.\
\n\n"
}

void Mars::facts{
        std::cout <<"Which of the following observations of Mars is NOT true?"<<std::endl;
    std::string answer = "";
    for (;;) {
    std::cout << "\n\n\[A]One Martian day lasts just over 24 hours \
\n[B]Mars has seasons similar to Earth's: Spring, Summer, Autumn, and Winter \
\n[C]Large amounts of water exist on Mars \
\n[D]Living microbes have been discovered underneath the surface of Mars\n\n
";
    if (std::cin >> answer && answer == "D") {
        break; // success -> bail out of loop
    }   else {
            std::cerr << "\nThat's not the answer, according to Wikipedia! Please try again and be careful \nto input A, B, C or D.";
            std::cin.clear(); // reset state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // consume wrong input
    }
  }
  std::cout << "That's right!  We are not aware of any present life on Mars, though ancient organic matter has been discovered in\
  \n rocks dating to three billion years old.  This discovery, combined with the above mentioned facts\
  \n serve to make Mars exploration a tempting pursuit.\n\n[ANY KEY]" << '\n';
  getch();
  std::cout << "\n\nNot only does Mars resemble Earth in certain ways, but it may very well serve as an excellent stepping stone for\
  \nspace travel." << std::endl;
  return;
}



#endif // MARS_HPP
