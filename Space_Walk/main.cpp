#include <iostream>
#include <string>
#include <conio.h>
#include <limits>
#include "Earth.hpp"
#include "Mars.hpp"
#include "Deeper.hpp"

void spaceTripQuestion();
void briefing();
void contemplation();
void readyQuestion();
void debriefing();

int main()
{

    std::cout << "\n=======**** SPACE WALKER **** =======\n\n";
    std::cout << "Greetings, planet walker.  What is your name?" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "\n\nOkay, " << name << ".  It's a cloudy Monday mid-morning, and you just showed up to VC. \n\n[PRESS ANY KEY TO CONTINUE]" << std::endl;
    getch();
    std::cout<< "\n\nAs you walk towards class, you hear a voice calling from several meters away.\
    '" << name << "!'  You see an unfamiliar, well-dressed man running up towards you, in a non-threatening way.\n\n\[PRESS ANY KEY TO CONTINUE]" << std::endl;
    getch();
    std::cout << "\n\nCatching his breath, the man says, 'I'm superintendent Morales, and I've been looking all over for you.  Our college has started an experimental space program and is looking for volunteers.\n\
    We have one space left for our big space trip, and I know you're the one for the job!  So, what do you say?'\n\n" << std::endl;

    spaceTripQuestion();

    briefing();

    contemplation();

    Earth earthObj;
    earthObj.introduction();
    earthObj.question1();

    Mars marsObj;
    marsObj.intro();
    marsObj.facts();
    marsObj.colonization();

    Deeper deep;
    deep.intro();
    deep.distance();
    deep.hubble();

    debriefing();

    return 0;
}

 void spaceTripQuestion() {
  int answer = 0;
  for (;;) {
    std::cout << "\n\n[0] 'Hmmm.... nah.'\n\n[1] 'Yes, I'd love to go explore space!'\n\n";
    if (std::cin >> answer && answer == 1) {
      break; // success -> bail out of loop
    } else {
      std::cerr << "\n\nPlease please please please!\n";
      std::cin.clear(); // reset state
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // consume wrong input
    }
  }
  std::cout << "\n\nSuperintendent Morales lets out a great, bellowing laugh and says, 'I knew you were the one for the job!'" <<"\n";
  return;
}



void briefing(){
    std::cout << "\n\nYou brush your teeth, put on your space suit and within the hour, you arrive at the Kennedy Space Center on Merritt Island Florida.\n\n[ANY KEY]" << std::endl;
    getch();
    std::cout <<"\n\nYou will be riding the SpaceX Starship today.  This is a fully reusable, \nstainless steel rocket designed to carry up to 100 tons of cargo.\n\n\[ANY KEY]" <<std::endl;
    getch();
    std::cout<< "\n\nLaunching this ship will likely generate 2,000 tons, or approx. 4 million pounds of carbon dioxide equivalent, and cost between $2-10 million.\n\n\[ANY KEY]" <<std::endl;
    getch();
    std::cout<<"\n\nHowever, these environmental and financial costs will likely decrease as space \ntravel becomes more common.\n\n\[ANY]"<<std::endl;
    getch();
    std::cout<<"\n\nThat's just a little tidbit of information to get the ball rolling.  From here \non out, it's going to be\
 up to you to report on your findings \nas you travel through space!\n\n [ANY] " << std::endl;
    getch();

return;
}

void contemplation(){
std::cout << "\n\nOnce you're in space, you decide it's time to stretch your legs.\
    \n\nSo you open the hatch, step outside and take a space walk. \n\n[ANY KEY]" << std::endl;
    getch();
    std::cout << "\n\nBeyond your spaceship, you can see blazing asteroid belts, shining galaxy clusters,\
\n\npulsing stars and mighty planets.\n\n[ANY KEY]" << std::endl;
    getch();
    std::cout << "\n\nWhile looking upon this majestic sight, you ask yourself,\
     \n'Where was I this morning?'\n\n[ANY KEY]" << std::endl;
     getch();
}

void debriefing(){
std::cout <<"\n\nSuddenly, you feel a vibration in your pocket.  It's your phone ringing.\n" <<std::endl;
    std::string answer = "";
    for (;;) {
    std::cout << "\n\n\[A] Check phone.\
\n[B] Ignore it.\n";
    if (std::cin >> answer && answer == "A") {
        break; // success -> bail out of loop
    }   else {
            std::cerr << "\n\nThat was your alarm clock -- you forgot to pick up your clothes from dry cleaning!\
            \n\nGAME OVER\n\nBetter check your phone next time!";
            std::cin.clear(); // reset state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // consume wrong input
    }
  }
  std::cout << "\n\nIt's your alarm, reminding you to go and pick up your dry cleaning.\
  \n\nYou hop back in the space ship, float on down to Earth and pick up your fancy\
  \noutfit from the cleaners.\n\n\
  Just in time, too, because you are about to win an award for your outstanding space discoveries!\n\n\n\
  ~~$*$*$===GAME OVER!  THANKS FOR PLAYING!===$*$*$~~\n" << std::endl;
  getch();
  return;
}


