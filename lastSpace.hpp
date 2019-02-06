/************************************************
 * program name: lastSpace.hpp
 * author: Ashley Merriner
 * date: 3/18/18
 * description: header file for child LastSpace
**************************************************/
#ifndef LASTSPACE_HPP
#define LASTSPACE_HPP
#include <string>
#include <vector>
#include "space.hpp"
#include "kitsune.hpp"

using namespace std;

class LastSpace : public Space
{
   public: 
      LastSpace();
      int special(std::vector<std::string>&, int);
      std::string getType();
      std::string getDescrip();
};
#endif
