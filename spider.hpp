/****************************************
 * program name: spider.hpp
 * author: Ashley Merriner
 * date: 3/18/18
 * description: header file for class
 * Spider
*****************************************/
#ifndef SPIDER_HPP
#define SPIDER_HPP
#include "space.hpp"
#include <vector>
#include <string>

class Spider : public Space
{
   public: 
      Spider();
      int special(std::vector<std::string>&, int);
      std::string getType();
      std::string getDescrip();
};
#endif
