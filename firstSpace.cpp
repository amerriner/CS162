/*******************************************
 * program name: firstSpace.cpp
 * author: Ashley Merriner
 * date: 3.18.18
 * description: This program implements 
 * child class FirstSpace.
*******************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "firstSpace.hpp"
#include "space.hpp"
#include "kitsune.hpp"

using namespace std;

/**************************
    *Constructor*
**************************/
FirstSpace::FirstSpace()
{
   this->type = "The Beginning";
   this->descrip = "A quiet woodland clearing, doused in moonlight.";
}

/********************************
      *special()*
Sets the function of the space
**********************************/
int FirstSpace::special(std::vector<std::string>& bag, int SIZE)
{
   int ans;

   cout << "A nudge, this time gentle, once again " << endl; 
   cout << "Wakes the injured, sleeping fox, " <<endl;
   cout << "Who finds himself in another glade, untouched by the fire." << endl;
   cout << "\n \n";
   cout << "'Good Night,' says a voice." << endl;
   cout << "\n\n";
   cout << "Kitsune looks for the speaker," << endl;
   cout << "But sees nothing but silver light." << endl;
   cout << "\n\n'Up here,' the voice chuckles." << endl;
   cout << "As Kitsune raises his gaze, wincing at the pain that races" << endl;
   cout << "Along the burns that lick his sides," << endl; 
   cout << "He is bemused to find himself speaking to the Moon.";
   cout << "\n\nCurious, Kitsune cocks his head to the side," << endl;
   cout << "Waiting for Moon to speak again.";
   cout << "\n\n 'You are gravely injured,' describes Moon." << endl;
   cout << "'Without care, you will be dead shortly.'";
   cout << "\n\nNonplussed, Kitsune sits quietly.";
   cout << "\n\nSlightly put off by his nonchalance, Moon continues: ";
   cout << "\n'Luckily, however, I know how to help.'";
   cout << "\n'In a tall tree, in the middle of the forest, lives a Woman.'";
   cout << "\nSitting up slightly, Kitsune perks his ears.";
   cout << "\nHumans were off limits, taboo, and the forest was dark.";
   cout << "\nSatisfied with the newly-gained attention, Moon goes on.";
   cout << "\n'This Woman holds the ability to craft a talisman to heal you.'" << endl;
   cout << "'However, she does not like visiters," << endl;
   cout << "And so the path to her is known by none but one." << endl;
   cout << "\n'Luckily for you, I am that one." << endl;
   cout << "The fox eyes Moon warily, " << endl;
   cout << "Waiting for the price of the information." << endl;
   cout << "\n'Even more luckily, I am bored enough to show you." << endl;
   cout << "Seeing Kitsune's skepticism, Moon assures him," << endl;
   cout << "'The only thing I ask, is that we travel at night. Obviously.'";
   cout << "\nThe fox snorts in laughter, and then, after a small beat," << endl;
   cout << "Nods in agreement." << endl;
   cout << "'Perfect,' says Moon. 'One more thing: '" << endl;
   cout << "'I can offer you one of three boons to help you on your way.'" << endl;
   cout << "'The first is armor, spun of spider silk. It will help protect you from harm.'";
   cout << "\n'The next is a dagger, made from hard stone. It will help defend against foes.'";
   cout << "\n'The final is an elixir made from a drop of sunlight. It will help heal you.";
   cout << "\n\n'Remember that you may only bring one. Choose wisely!" << endl;
   cout << "\nWHICH WILL YOU CHOOSE?" << endl;
   cout << "1. Armor (+10 defense)" << endl;
   cout << "2. Dagger (+10 attack)" << endl;
   cout << "3. Elixir (+30 health)" << endl;
   cout << "Please enter 1, 2, or 3" << endl;
   cin >> ans;

   if (ans == 1)
   {
      cout << "You have chosen the ARMOR. Your defense is now 30." << endl;
      fox.setDefense(30);
      bag.push_back("armor");
   }

   else if(ans == 2)
   {
      cout << "You have chosen the DAGGER. Your attack is now 30." << endl;
      fox.setAttack(30);
      bag.push_back("dagger");
   }
 
   else if (ans == 3)
   {
      cout << "You have chosen the ELIXER. You may use it to heal yourself 30 points." << endl;
      bag.push_back("elixir");
   }

   cout << "The Moon smiles, and Kitsune is enveloped in soft white light." << endl;
   cout << "'Set then?' he asks." << endl;
   cout << "With nothing to lose, the fox nods and follows the moon into the forest." << endl;

   cout << "\n\n\n";

   return 1;
}

/**********************************
   *Mutators for Mem Vars*
***********************************/

std::string FirstSpace::getType()
{
   return type;
}

std::string FirstSpace::getDescrip()
{
   return descrip;
}

