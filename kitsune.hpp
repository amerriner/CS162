/************************************************
 * program name: kitsune.hpp
 * author: Ashley Merriner
 * date: 3/18/18
 * description: header file for class Kitsune.
***************************************************/
#ifndef KITSUNE_HPP
#define KITSUNE_HPP
#include <string>

class Kitsune
{
   private:
      int health;
      int defense;
      int attack;

   public:
      Kitsune();
      void healthPoints();
      void setHealth(int);
      int fight();
      int getHealth();
      int getDefense();
      void setDefense(int);
      int getAttack();
      void setAttack(int);
};
#endif
