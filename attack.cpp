/************************************
 * program name: attack. cpp
 * author: Ashley Merriner
 * date: 3/18/18
 * description: implementation file
 * for class attack
****************************************/
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <time.h>
#include "space.hpp"
#include "kitsune.hpp"
#include "attack.hpp"

using namespace std;

/*****************************
 * Constructor *
*****************************/
Attack::Attack()
{
   this->type = "Attack!!";
}

/**************************
     * special()*
    Fighting space
***************************/
int Attack::special(std::vector<std::string>& bag, int SIZE)
{
   //cout << "You have " << bag.size() << " items in your bag." << endl;

   int ans; 
   srand((unsigned)time(NULL));
   fox.healthPoints();
   int num = (rand() % 100);
   int health = fox.getHealth();
   bool winFight = false;
   if (num > 50)
   {
      this->descrip = "Deep in the forest, with only a sliver a light to see.";
      cout << "\n\nAs Kitsune follows the dim Moon's light, an eerie silence falls on the forest, " << endl;
      cout << " and a fog blurs his vision further." << endl;
      
      cout << "\n\nJust as he turns around, a scream echoes from the fog, " <<endl;
      cout << "freezing Kitsune in place. A Banshee!" << endl;
      cout << "\n\nThe Banshee has 50 hit points and up to 35 attack power!" <<endl;
   }
   else if (num <= 50)
   {
      this->descrip = "Alongside a small pond, deep in the forest.";
      cout << "\n\nAs Kitsune follows the Moon, he comes to a small pond." << endl;
      cout << "He leans to take a drink, " << endl;
      cout << "but a cold, slimy hand springs from the pond," << endl;
      cout << "reaching for his throat! \n\n";
      cout << "\n\nKitsune scrambles back, and shivers as a lurching demon " <<endl;
      cout << "climbs from the water. A Kappa!!" << endl;
      cout << "The Kappa has 30 hit points and up to 25 attack power!" << endl;
   }

   cout << "Kitsune has " << fox.getHealth() << " health points." << endl;
   cout << "His defense is " << fox.getDefense() << "." << endl;
   
   cout << "You have three options: " << endl;
   cout << "1. Run (40 percent chance of escape with no damage)" << endl;
   cout << "2. Attempt to trick the monster (60 percent chance with no damage)" << endl;
   cout << "3. Fight!" << endl;
   cout << "Please enter 1, 2, or 3" << endl;
   cin >> ans;

   if (ans == 1)
   {
      int run = (rand() % 100) + 1;
      if (run <= 40)
      {
         cout << "You successfully ran away!!" << endl;
      }
      else
      {
         cout << "Kitsune breaks away, but no without damge." << endl;
         cout << "Kitsune's health goes down 10 points." << endl;
         health -= 10;
         fox.setHealth(health);
      }
   }
   else if (ans == 2)
   {
      int charm = (rand() % 100) + 1;
      if (charm <= 60)
      {
         cout << "With his cunning, Kitsune charms the monster, convincing it to leave. Kitsune escapes!" << endl;
      }
      else
      {
         cout << "Kitsune's attempt to charm the monster was unsuccessful.";
         cout << "The monster lashes out at Kitsune, who jumps back right in time." << endl;
         cout << "He gets away, but notices a wound from the monster's talons." << endl;
         cout << "Kitsune loses 10 health points." << endl;
         health -= 10;
         fox.setHealth(health);
      }
   } 
   else if (ans == 3)
   {
      int monHealth;
      int fight;
      int damage;
      int def = fox.getDefense();
      if (num > 50)
      {
         monHealth = 35;
      }
      else if (num <= 50)
      {
         monHealth = 25;
      }
      if (bag.size() >= 1)
      {
         for (int i = 0; i < bag.size(); i++)
         {   
             if (bag[i] == "elixir")
             {
                int yesno;
                cout << "Would you like to use an elixir (+30 health)?" << endl;
                cout << "Enter 1 for yes, 2 for no" << endl;
                cin >> yesno;

                if (yesno == 1)
                {
                   health += 30;
                   cout << "Kitsune now has " << health << " hit points." << endl;
                   fox.setHealth(health);
                   bag.pop_back();
                }
                else
                {
                   break;
                }
            }
         }
      }
      while (!winFight)
      {
         if (num > 50)
         {
            fight = (rand() % 35) + 1;
         }
         else if (num <= 50)
         {
            fight = (rand() % 25) + 1;
         }
         cout << "The monster hits for " << fight << " points!" << endl;
         if (fight <= def)
         {
            damage = 0;
            cout << "Kitsune suffers no damage!!!" << endl;
         }
         else
         {
            damage = (fight - def);
            health -= damage;
            cout << "Kitsune loses " << damage << " hit points!" << endl;
            if (health <= 0)  
            {
               cout << "As Moon looks on in dispair, the monster swipes out a final time, and Kitsune is no more." << endl;
               cout << "\n\n\nGAME OVER" << endl;
               return 0;
            }
            else 
            {
               health -= damage;
               fox.setHealth(health);
            }
         }
         cout << "Kitsune strikes next!" << endl;
         int kFight = fox.fight();
         monHealth -= kFight;
         if (monHealth <= 0)
         {
            cout << "Victory!!" << endl;
            cout << "Curious, Kitsune searches the monster and finds an ELIXIR!" << endl;
            if (bag.size() >= SIZE)
            {
               cout << "Your bag is full! You cannot hold any more items." << endl;
            }
            else
            {
               bag.push_back("elixir");
               cout << "An ELIXIR has been added to your bag." << endl;
            }
            winFight = true;
         }
         else
         {
            cout << "The monster has " << monHealth << " hit points left." << endl;
            cout << "Next round!" << endl;
         }
      }
   }
   cout << "Panting, Kitsune glares up at Moon." << endl;
   cout << "'What?!' exclaims Moon. 'You ended up fine. Keep moving.'" << endl;
   cout << "With an eye roll, the fox continues into the forest." << endl;
   cout << "\n\n\n";
   return 1;
}

/*****************************
 * Mutators for Mem Vars *
*****************************/

std::string Attack::getType()
{
   return type;
}

std::string Attack::getDescrip()
{
   return descrip;
}

