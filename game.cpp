#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <time.h>
#include "space.hpp"
#include "firstSpace.hpp"
#include "linkedList.hpp"
#include "attack.hpp"
#include "lastSpace.hpp"
#include "spider.hpp"

using namespace std;

bool opening_menu()
{
   int ans;
   cout << "        Welcome to " << endl;
   cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
   cout << "|          KITSUNE            |" << endl;
   cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
   cout << "\n\n";
   cout << "Help Kitsune find the TALISMAN to heal himself!" << endl;

   cout << "\n\n" << endl;
   cout << "Would you like to play KITSUNE? Enter 1 for yes, 2 for no" << endl;
   cin >> ans;
   if (ans == 1)
   {
      cout << "Let's play! " << endl;
      return true;
   }
   else 
   {
      cout << "See you next time!" << endl;
      return false;
   }
}

int closing_menu()
{
   int ans;
   cout << "Thank you for playing! " << endl;
   cout << "Choose from below: " << endl;
   cout << "1. Play Again" << endl;
   cout << "2. Quit" << endl;
   cin >> ans;
   if (ans == 1)
   {
      cout << "Let's play again!" << endl;
      return 1;
   }
   else
   {
      cout << "See you next time!" << endl;
      return 0;
   }
}

int main()
{
   while (1)
   {
      Space* space;
      Space* space2;
      Space* space3;
      Space* space4;
      srand((unsigned)time(NULL));
      int rounds = 4;
      int SIZE = 10;
      std::vector<std::string> items;
      LinkedList list;

      if (opening_menu())
      {
         cout << "Not so long ago, in a forest not far from here, lived a young fox named Kitsune." << endl;
         cout << "Kitsune was, like all foxes, cunning and smart, and loved to play tricks on the local animals." << endl;
         cout << "However, he was also sweet and helpful, often aiding trapped animals with his wit and courage." << endl;
         cout << "\n\n" << endl;
         cout << "One night, near the nest Kitsune was sleeping in, a young boy fell asleep next to his campfire." << endl;
         cout << "A slight breeze aroze, and a tiny ember took to the air, and flew to the neighboring trees." << endl;
         cout << "\n";
         cout << " ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~" << endl;
         cout << "   ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~    ~" << endl;
         cout << "\nThe ember landed delicately, lightly falling on the leaf of the nearest tree." << endl;
         cout << "However, the summer was a particularly dry one, and the leaf under the ember was soon engulfed, followed swiftly by" << endl;
         cout << "the branch," << endl;
         cout << "    the trunk, " << endl;
         cout << "        the grass, " << endl;
         cout << "until suddenly, the whole area was ablaze. " << endl;
         cout << "The young boy was woken with burning lungs, the smoke thick and heavy." << endl;
         cout << "With great luck, he was able to escape the blaze, and make it back to his town to call for help." << endl;
         cout << "The animals in the forest ran as fast as they could, trying to reach safety." << endl;
         cout << "All escaped but one: " << endl;
         cout << "\n\n";
         cout << "Kitsune" << endl;
         cout << "\n\n" << endl;
         cout << "Kitsune was known for his long sleeps, which, on this night, left him surrounded on all sides by fire." << endl;
         cout << "As the endangered fox lay dreaming, unaware of the inferno threatening his life," << endl;
         cout << "he was suddenly aware of a series of frantic nudges, pushing Kitsune into awareness." << endl;
         cout << "Glancing around, he saw no one, and then all at once noticed the gravity of his situation. " << endl;
         cout << "Completely surrounded, the poor fox had no choice but to run through the flames, over hot beds of flaming leaves." << endl;
         cout << "The flames licked his sides, singeing his fur to his skin, leaving brutal, white-hot pain in its place." << endl;
         cout << "And still the fox ran, until finally, " << endl;
         cout << "He could run no more." << endl;
         cout << "\n\n" << endl;
         cout << "Splashing over the banks of a small river, Kitsune fell, limply, and was immediately unconscious." << endl;
   
         cout << "\n\n\n\n\n";

         cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
         cout << "     CHAPTER 1:        " << endl; 
         cout << "   ";
         space = new FirstSpace;
         list.addSpace(space);
         cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
         cout << space->getDescrip() << endl;
         cout << "You have " << items.size() << " items in your bag." << endl;
         if (space->special(items, SIZE) == 0)
         {
            return 0;
         }
   
         cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
         cout << "      CHAPTER 2: " << endl;
         cout << "     The Journey" << endl;
         cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
         for (int i = 0; i < rounds; i++)
         {
            srand ((unsigned)time(NULL));
            cout << "You have " << items.size() << " items in your bag.\n";
            int num = (rand() % 2);
            if (num == 1)
            { 
               space2 = new Attack;
               list.addSpace(space2);
               cout << space2->getDescrip() << endl;
               list.getPrev(space2);
               if (space2->special(items, SIZE) == 0)
               {
                  return 0;
               } 
            }
            else
            {
               space4 = new Spider;
               list.addSpace(space4);
               cout << space4->getDescrip() << endl;
               list.getPrev(space4);
               if (space4->special(items, SIZE) == 0)
               {
                  return 0;
               }
            }
         }

         cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
         cout << "      CHAPTER 3:" << endl;
         cout << "   ";
         space3 = new LastSpace;
         list.addSpace(space3);
         cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
         cout << space->getDescrip() << endl;
         list.getPrev(space3);
         cout << "You have " << items.size() << " items in your bag." << endl;
         if (space3->special(items, SIZE) == 0)
         {
            break;
         }

         cout << "\n\n\n";
         cout << "Exhausted, but victorious, Kitsune steps outside, his eyes blinking in the pre-dawn light.";
         cout << "\nThe Talisman, now hanging around his neck, is already almost finished healing the fox.";
         cout << "\nThe fox, rejuvinated, looks to the Moon, grinning, expecting the usual sarcasm and congratulations." << endl;
         cout << "Instead, he is met with " << endl;
         cout << "\n\n";
         cout << "silence.";
         cout << "\n\n";
         cout << "Immediately understands that the link between them is gone, and" << endl;
         cout << "For the first time, " << endl;
         cout << "the fox understands why the Wolf howls at the Moon." << endl;
         cout << "\nWith a bittersweet sigh, the healed Kitsune begins his victory march home," << endl;
         cout << "\n\n" << endl;
         cout << "alone, once more." << endl;
         cout << "\n\n\n\n\n\n" << endl;
      }
      if (closing_menu() == 0)
      {
         return 0;
      }
   }
   if (closing_menu() == 0)
   {
      return 0;
   }
}
