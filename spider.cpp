/*****************************************
 * program name: spider.cpp
 * author: Ashley Merriner
 * date: 3/18/18
 * description: implementation file for
 * class Spider.
*******************************************/
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <string>
#include "space.hpp"
#include "kitsune.hpp"
#include "spider.hpp"

using namespace std;

/*********************************
 * constructor *
********************************/
Spider::Spider()
{
   this->type = "The Spider";
   this->descrip = "A grassy meadow, suddenly appearing through the trees.";
}

/**************************
    * Special() *
 Game with the Spider
************************/
int Spider::special(std::vector<std::string>& bag, int SIZE)
{
   int ans;
   srand((unsigned) time(NULL));
   fox.healthPoints();
   int health = fox.getHealth();
   if (health <= 0)
   {
      cout << "Kitsune's wounds have proven too much for him, and when he falls, he does not get up again." << endl;
      cout << "\n\nGAME OVER" << endl;
      return 0;
   }
   cout << "The Moon's guidance eventually leads the pair to a small meadow, barely five trees across." << endl;
   cout << "In the middle of the meadow sits an old log, with dew-soaked webs clinging to the sides." << endl;
   cout << "Kitsune hesitantly approaches the log, and is surprised when a voice booms out at him." << endl;
   cout << "'Hello Kitsune!' calls a small Spider the fox had previously overlooked." << endl;
   cout << "'Don't be shy! I have a proposition for you.'" << endl;
   cout << "More unsure than ever, Kitsune stares warily at the talking Spider." << endl;
   cout << "He has had problems with spiders before:" << endl;
   cout << "Their creeping webs and silent legs had trapped him in many different uncomfortable situations.";
   cout << "\n\n";
   cout << "'I won't bite, I promise,' says the Spider." << endl;
   cout << "'Much like your friend the Moon here, I have spent too long alone and am properly bored.'"<< endl;
   cout << "'Indulge an old Spider with a game will you?'" << endl;
   cout << "'If you win, I will give you my ELIXIR.'" << endl;
   cout << "\n\n";
   cout << "PLAY GAME? Enter 1 for yes, 2 for no" << endl;
   cin >> ans;
   if (ans == 2)
   {
      cout << "Crestfallen, the spider settles back into the web. 'Begone, then. Leave me to my solitude.'";
      cout << "\nAnd with that, he has fallen asleep, and the two continue their journey." << endl;
      return 1;
   }
   else
   {
      int randNum = (rand() % 10) + 1;
      //cout << randNum << endl;
      int chances = 3;
      int guess;
      bool correctGuess = false;
      cout << "The Spider leaps for joy. 'Excellent! Here are the rules:'" << endl;
      cout << "'I am thinking of a number between 1 and 10.'" << endl;
      cout << "'You will have 3 chances to guess the number.'" << endl;
      cout << "'If you guess the number, I will give you an ELIXIR.'" << endl;
      cout << "'If you don't...we'll cross that bridge when we get there.'" << endl; 
      cout << "'That's it! Not too bad, right?'" << endl;

      while (chances > 0)
      {
         cout << "ENTER A NUMBER BETWEEN 1 AND 10: " << endl;
         cin >> guess;

         if (guess == randNum)
         {
            correctGuess = true;
            bag.push_back("elixir");
            break;
         }
         else 
         {
            cout << "That is incorrect!" << endl;
            chances--;
         }
      }  
      if (correctGuess == true)
      {
         cout << "YOU GUESSED THE CORRECT NUMBER!" << endl;
         cout << "'Congratulations, young master Kitsune!' exclaims the spider." << endl;
         cout << "'You have well and truly earned this ELIXIR. Use it wisely!'" << endl;
         cout << "\n\n";
         if (bag.size() >= SIZE)
         {
            cout << "Your bag is full, you cannot hold any more items." << endl;
         }
         else
         {
            cout << "An ELIXIR has been added to your bag." << endl;
         }
         cout << "'Thank you, Fox, for indulging me.'" << endl;
         cout << "And without hesitation, the Spider curls back into his web, and falls asleep.'" << endl;
      }
      else if (correctGuess == false)
      {
         cout << "The Spider chuckles and says darkly, 'You did not guess correctly.'" << endl;
         cout << "'Unfortunately, you must pay.'" << endl;
         cout << "The Spider lunges with a speed that surprises Kitsune." << endl;
         cout << "He yelps as the Spider leaves a thin, bloody line down his cheek." << endl;
         cout << "YOU HAVE LOST 5 HIT POINTS" << endl;
 
         health -= 5;
         if (health <= 0)
         {
            cout << "This last attack proves too much for the wounded Kitsune." << endl;
            cout << "With a final heave forward, he falls and is still." << endl;
            cout << "\n\n";
            cout << "GAME OVER" << endl;
            return 0;
         }
         fox.setHealth(health);
         cout << "\n\n";
         cout << "As Kitsune stares angrily at the Spider, the arachnid laughs and simply says: ";
         cout << "\n'Thank you for the indulgence. You may leave.'" << endl;
         cout << "And with that he is asleep." << endl;
         cout << "Kitsune glares at Moon, who is trying not to laugh." << endl;
      }
   }

      cout << "With that, the two companions head back into the darkness of the forest." << endl;
      cout << "\n\n";
      return 1;
}

/***************************
 * Mutators *
************************/
std::string Spider::getType()
{
   return type;
}

std::string Spider::getDescrip()
{
   return descrip;
}
