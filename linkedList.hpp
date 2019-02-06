/***********************************************
 * program name: linkedList.hpp
 * author: Ashley Merriner
 * date: 3.18.18
 * desciption: header file for linked list
************************************************/

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include "space.hpp"
#include <vector>
#include <string>

using namespace std;

class LinkedList
{
   private: 
      Space* head;
      Space* tail;

   public:
      LinkedList();
      ~LinkedList();
      bool isEmpty();
      void addSpace(Space*);
      std::string getSpace(Space*);
      void getPrev(Space*);
};
#endif
