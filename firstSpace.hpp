/***************************************************
 * program name: firstSpace.hpp
 * author: Ashley Merriner
 * date: 3.18.18
 * description: header file for child firstSpace
****************************************************/
#ifndef FIRSTSPACE_HPP
#define FIRSTSPACE_HPP
#include <string>
#include <vector>
#include "space.hpp"
#include "kitsune.hpp"

using namespace std;

class FirstSpace : public Space
{
   public:
      FirstSpace();
      int special(std::vector<std::string>&, int);
      std::string getType();
      std::string getDescrip();
};
#endif 
