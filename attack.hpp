/*******************************************************
 * program name: attack.hpp
 * author: Ashley Merriner
 * date: 3.18.18
 * description: header file for child class Attack.
********************************************************/
#ifndef ATTACK_HPP
#define ATTACK_HPP
#include <string>
#include <vector>
#include "space.hpp"
#include "kitsune.hpp"
#include "items.hpp"

class Attack : public Space
{
   public:
      Attack();
      int special(std::vector<std::string>&, int);
      std::string getType();
      std::string getDescrip();
      //void addItem(std::vector<std::string>&, std::string);
};
#endif
