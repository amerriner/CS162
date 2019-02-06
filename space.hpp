/************************************************
 * program name: space.hpp
 * author: Ashley Merriner
 * date: 3/15/2018
 * description: header file for parent class
 * Space.
*************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP
#include <string>
#include <vector>
#include "kitsune.hpp"
//#include "items.hpp"

class Space
{
   protected:
      Kitsune fox;
      std::string type;
      std::string descrip;

   public:
      Space* top;
      Space* right;
      Space* left;
      Space* bottom;
      Space();
      virtual int special(std::vector<std::string>&, int) = 0;
      virtual std::string getType() = 0;
      virtual std::string getDescrip() = 0;
};

#endif
