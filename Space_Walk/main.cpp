#include <iostream>
#include <string>
#include "Moon.h"

void spaceTripQuestion();

int main()
{
    std::cout << "\n=======**** SPACE WALK **** =======\n";
    std::cout << "Greetings, planet walker.  What is your name?" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Okay, " << name << ".  It's a cloudy Monday mid-morning, and you just showed up to VC.\
    As you walk towards class, you hear a voice calling from several meters away.\
    '"<< name << "!'  You see an unfamiliar man running up towards you, in a non-threatening way.\n\n\
    'I've been looking all over for you.  Our college has started an experimental space program and is looking for volunteers.\n\
    We have one space left for our big space trip, and I know you're the one for the job!  So, what do you say?\n\n" << std::endl;

    spaceTripQuestion();



    Moon moonObj;
    moonObj.moonSize();
    return 0;
}

 void spaceTripQuestion() {
    int answer = 0;
    {
            std::cout << "[0] 'What do I look like, a nerd?  Talk to the hand!'\n\
[1] 'Yes, I'd love to go off and explore space.  Count me in!'" <<std::endl;
            std::cin >> answer;

            if(answer == 0){
                    std::cout << "Please please please please please please please!!!\n\n" << std::endl;
                    spaceTripQuestion();
                    } else {std::cout <<"I knew you were the one for the job!" << std::endl;}
    }
    return;
    }
