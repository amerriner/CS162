/************************************
 * program name: lastSpace.cpp
 * author: Ashley Merriner
 * date: 3/18/18
 * description: imiplementation file 
 * for class lastSpace
*******************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>
#include "space.hpp"
#include "lastSpace.hpp"
#include "kitsune.hpp"

using namespace std;

/*************************************
          *Constructor*
**************************************/
LastSpace::LastSpace() : Space()
{
   this->type = "The End";
   this->descrip = "A tall tree, in which a powerful Woman lives.";
}

/*********************************
           *Special()*
      Function of this Space
**********************************/
int LastSpace::special(std::vector<std::string>& bag, int SIZE)
{
   int ans;
   srand((unsigned)time(NULL));
   int monHealth = 500;
   int defense = fox.getDefense();
   int attack = fox.getAttack();
   fox.healthPoints(); 
   int health = fox.getHealth();
   int rounds = 0;
   if (health <= 0)
   {
      cout << "So close to the end, Kitsune's succumbs to his wounds." << endl;
      cout << "\n\n";
      cout << "GAME OVER" << endl;
      return 0;
   }
  
   
   cout << "At last, the pair find their way to the clearing." << endl;
   cout << "In the center stands a tall, forboding tree, covered in moss.";
   cout << "\nA thin, wooden walkway spirals its way to the top, and Kitsune";
   cout << "\nbegins the long trek upwards." << endl;
   cout << "\n\n";
   cout << "                     __  "<< endl;
   cout << "                    (  )" << endl;
   cout << "                    |o |" << endl;
   cout << "                  ,----'  '" << endl;
   cout << "                _/" << endl;
   cout << "               /" << endl;
   cout << "             _/" << endl;
   cout << "            /" << endl;
   cout << "          _/" << endl;
   cout << "         /" << endl;
   cout << "       _/" << endl;
   cout << "      /" << endl;
   cout << "_____/" << endl;
   cout << "\n\n";
   cout << "As he nears the top, the Moon calls out." << endl;
   cout << "\n\n'Wait!' he cries." << endl;
   cout << "Kitsune turns to stare at him in curiosity." << endl;
   cout << "'It seems we have reached the end of our journey.'" << endl;
   cout << "'I cannot follow you inside, so I must offer some advice here.'";
   cout << "\n'First: remember, you MUST obtain the TALISMAN in order to heal yourself.'";
   cout << "\n'Second: the Woman inside is powerful, and extremely dangerous.'";
   cout << "\n'While I do not know for sure, I believe a trial lies in wait inside.'"; 
   cout << "\n'Therefore, I will bestow upon you some of my power now, in the hopes it will help you succeed.'" << endl;
   cout << "********************YOU HAVE EARNED THE POWER OF THE MOON*************************";
   cout << "\nYOUR HITPOINTS HAVE INCREASED BY 100 POINTS";
   health += 100;
   fox.setHealth(health);
   cout << "\nYOUR DEFENCE HAS INCREASED BY 40 POINTS";
   defense += 40;
   fox.setDefense(defense);
   cout << "\nYOUR ATTACK HAS INCREASED BY 50 POINTS";
   attack += 50;
   fox.setAttack(attack);
   cout << "\nYOU HAVE LEARNED 'SHINE' (blocks any attack for 1 round)" << endl;
   cout << "**********************************************************************************";
   cout << "\n\n";
   cout << "As the powers settle on the surprised fox, the Moon continues: " << endl;
   cout << "'Our time together was brief, but enjoyable. I am happy to call you my friend.'";
   cout << "\n'Be strong.'" << endl;
   cout << "\n\n";
   cout << "With those words, Kitsune steps through the door." << endl;
   cout << "\n\n\n\n";
   
   cout << "The Woman is waiting inside, quiet and still, in a tall chair carved into the tree.";
   cout << "\n'I have no interest in pleasantries or discussion,' She begins." << endl;
   cout << "'You are here for my Talisman, in order to heal your wounds.'" << endl;
   cout << "The Woman is quiet for a beat, studying the fox, and then resumes." << endl;
   cout << "\n"; 
   cout << "'As I'm sure you have guessed, I will not part with it easily.'" << endl;
   cout << "'I have watched you for a long time, Kitsune.'" << endl;
   cout << "'I have watched you spin your careful webs.'" << endl;
   cout << "'There are few in this forest who have not felt the burn of your cunning ploys.'";
   cout << "'There are even some who are happy to learn of your pain.'" << endl;
   cout << "'I am not one of them; however, this Talisman can only be given to those who earn it.'";
   cout << "\n'As you are not in possession of noble character, you must instead fight me for it.'";
   cout << "\n'Do you accept these terms?'" << endl;
   cout << "(Enter 1 for yes, 2 for no)" << endl;
   cin >> ans;
   if (ans == 2)
   {
      cout << "'You have chosen to die. Leave this place.'" << endl;
      cout << "Kitsune struggles to his feet and exits, his life forfeit." << endl;
      cout << "\n\n";
      cout << "GAME OVER\n";
      return 0;
   }
   else
   {
      cout << "'Good,' the Woman says with a nod. 'Let us begin.'" << endl;
      cout << "Immediately, she is transformed:" << endl;
      cout << "No longer crouched in her chair, the woman's tall figure towers over Kitsune.";
      cout << "\n'Prove your worth!'" << endl;
      cout << "\n\n";
      cout << "BOSS BATTLE" << endl;
      cout << "\n\n";
      while (health > 0 && monHealth > 0)
      { 
         rounds++;
         int monFight;
         int damage;
         int count = 0;
         int monSpecial = (rand() % 100) +1;
         cout << " _______________________" << endl;
         cout << "|                       |" << endl;
         cout << "        Round " << rounds << endl;
         cout << "|_______________________|" << endl;
         cout << "\n\n";
         cout << "Kitsune has " << health << " hit points." << endl;
         cout << "He has " << defense << " defense points." << endl;
         for (int i = 0; i < bag.size(); i++)
         {
            if (bag[i] == "elixir")
            {
                count++;
            }
         }
         cout << "He has " << count << " elixirs." << endl;
         cout << "\n\n";
         cout << "The Woman has " << monHealth << " hit points." << endl;
         cout << "The Woman has up to 100 attack points." << endl;
         cout << "\n\n";
         
         int num;
         if (count > 0)
         {
            int yesno;
            cout << "Would you like to use an ELIXIR?" << endl;
            cout << "Enter 1 for yes, 2 for no" << endl;
            cin >> yesno;
            cout << "\n\n";
            if (yesno == 1)
            {
               bag.pop_back();
               health += 30;
               fox.setHealth(health);
               cout << "Your health is now " << health << endl;
               cout << "\n\n";
            }
         }
         if ((rounds % 3) == 0 || rounds == 1)
         {
            cout << "Choose from below: " << endl;
            cout << "1. Use SHINE" << endl;
            cout << "2. Attack!" << endl;
            cin >> num;
         }
         else 
         {
            cout << "Attack!!!" << endl;
            num = 2;
         }
         if (num == 1)
         {
            monFight = (rand() % 100) + 1;
            cout << "The Woman hit for " << monFight << " points!" << endl;
            cout << "Kitsune uses SHINE! No damage!" << endl;
         }
         else if (num == 2)
         {
            if (monSpecial <= 40)
            {
               monFight = (rand() % 100) + 1;
               cout << "The Woman uses GROW!!" << endl;
               cout << "Her sun power causes the roots of the tree to bind Kitsune in place!" <<endl;
               cout << "Defense is null!" << endl;
               cout << "The Woman hits for " << monFight << " points!" << endl;
               health -= monFight;
               if (health <= 0)
               {
                  cout << "Kitsune struggles to his feet, too beat to stand." << endl;
                  cout << "Laughing, the Woman cries, 'You do not deserve this talisman!'" <<endl;
                  cout << "His life forfeit, Kitsune leaves the Tree to his death." << endl;
                  cout << "\n\nGAME OVER" << endl;
                  return 0;
               }
               else 
               {
                  cout << "You now have " << health << " hit points." << endl;
                  cout << "Kitsune is still bound! The Woman attacks again!" << endl;
               }
            }
            monFight = (rand() % 100) + 1;
            cout << "The Woman hits for " << monFight << " points!" << endl;
            if (defense >= monFight)
            {
               cout << "Your defense is strong! No damage!" <<endl;
            }
            else
            {
               damage = monFight - defense;
               health -= damage;
               if (health <= 0)
               {
                  cout << "As Kitsune struggles to his feet, the Woman laughs: " << endl;   
                  cout << "'You are not worthy of this talisman! Leave this place!" << endl;
                  cout << "Kitsune leaves, his life forfeit." << endl;
                  cout << "\n\nGAME OVER" << endl;
                  return 0;
               }
               cout << "You now have " << health << " hit points." << endl;
            }
         } 
         cout << "\n\nKitsune attacks!" << endl;
         int fight = fox.fight();
         monHealth -= fight;
         if (monHealth <= 0)
         {
            cout << "Kitsune unleashes one last attempt, hoping to strike the Goddess down.";
            cout << "\nThe power of the Moon aids him in his quest, and the Woman falls!";
            cout << "\nKITSUNE HAS WON!!! THE TALISMAN IS HIS!" << endl;
            bag.push_back("talisman");
            return 1;
         }
         else
         {
            cout << "The Woman now has " << monHealth << " hit points!" << endl;
            cout << "NEXT ROUND" << endl;
         }
       } 
    }
   return 1;
}

/************************
 * Mutators *
************************/
std::string LastSpace::getType()
{
   return type;
}

std::string LastSpace::getDescrip()
{
   return descrip;
}
