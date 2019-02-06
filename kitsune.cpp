/******************************************
 * program name: kitsune.cpp
 * author: Ashley Merriner
 * date: 3/18/18
 * description: implementation file for
 * class Kitsune
********************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include "kitsune.hpp"

using namespace std;

/*****************************
      * Constructor *
******************************/
Kitsune::Kitsune()
{
   this->health = 50;
   this->defense = 20;
   this->attack = 20;
}

/*********************************
          * healthPoints() *
   fox looses 10 health points 
           per turn
**********************************/
void Kitsune::healthPoints()
{
   this->health -= 10;
}


/************************************
 * fight()
fight function for kitsune
************************************/
int Kitsune::fight()
{
   int num = (rand() % 100);
   if (num <= 30)
   {
      cout << "Kitsune uses KITSUNEBI! The fires add +30 to your attack!"<<endl;
      int newAttack = attack + 30;
      cout << "Kitsune hits for " << newAttack << " points!" << endl;
      return newAttack;
   }
   else
   {
      cout << "Kitsune hits for " << attack << " points!" << endl;
      return attack;
   }
}

/********************************
   * Mutators for Mem Vars *
********************************/
void Kitsune::setHealth(int h)
{
   health = h;
}

int Kitsune::getHealth()
{
   return health;
}

void Kitsune::setDefense(int d)
{
   defense = d;
}

int Kitsune::getDefense()
{
   return defense;
}

int Kitsune::getAttack()
{
   return attack;
}

void Kitsune::setAttack(int a)
{
   attack = a;
}
