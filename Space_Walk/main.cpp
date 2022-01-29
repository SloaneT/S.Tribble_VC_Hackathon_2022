#include <iostream>
#include <string>
#include <conio.h>
#include <limits>
#include "Moon.h"

void spaceTripQuestion();
void briefing();
void readyQuestion();

int main()
{

    std::cout << "\n=======**** SPACE WALK **** =======\n\n";
    std::cout << "Greetings, planet walker.  What is your name?" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "\n\nOkay, " << name << ".  It's a cloudy Monday mid-morning, and you just showed up to VC. \n\n[PRESS ENTER TO CONTINUE]" << std::endl;
    getch();
    std::cout<< "\n\nAs you walk towards class, you hear a voice calling from several meters away.\
    '" << name << "!'  You see an unfamiliar, well-dressed man running up towards you, in a non-threatening way.\n\n\[PRESS ENTER TO CONTINUE]" << std::endl;
    getch();
    std::cout << "\n\nCatching his breath, the man says, 'I'm superintendent Morales, and I've been looking all over for you.  Our college has started an experimental space program and is looking for volunteers.\n\
    We have one space left for our big space trip, and I know you're the one for the job!  So, what do you say?'\n\n" << std::endl;

    spaceTripQuestion();

    briefing();



    Moon moonObj;
    moonObj.moonSize();
    return 0;
}

 void spaceTripQuestion() {
  int answer = 0;
  for (;;) {
    std::cout << "\n\n[0] 'Hmmm.... nah.\n\n[1] 'Yes, I'd love to go explore space!'\n\n";
    if (std::cin >> answer && answer == 1) {
      break; // success -> bail out of loop
    } else {
      std::cerr << "\n\nPlease please please please!\n";
      std::cin.clear(); // reset state
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // consume wrong input
    }
  }
  std::cout << "Okay!" <<'\n';
  return;
}



void briefing(){
    std::cout << "\n\nYou brush your teeth, put on your space suit and within the hour, you arrive at the Kennedy Space Center on Merritt Island Florida.\n\n[ENTER]" << std::endl;
    getch();
    std::cout <<"\n\nYou will be riding the SpaceX Starship today.  This is a fully reusable, stainless steel rocket designed to carry up to 100 tons of cargo.\n\n\
Launching this ship will likely generate 2,000 tons, or approx. 4 million pounds of carbon dioxide equivalent, and cost between $2-10 million.\n\n\
However, these environmental and financial costs will likely decrease as space travel becomes more common.\n\n\
That's just a little tidbit of information to get the ball rolling.  From here on out, it's going to be\
 up to you to report on your findings as you travel through space!\
 \n\n [ENTER] " << std::endl;
 getch();



}


