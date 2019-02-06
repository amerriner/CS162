/****************************************************
 * program name: linkedList.cpp
 * author: Ashley Merriner
 * date: 3/18/18
 * description: linked list file
**************************************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "space.hpp"
#include "linkedList.hpp"


using namespace std;

/******************************
 * Constructor
********************************/
LinkedList::LinkedList()
{
   head = NULL;
   tail = NULL;
}

/************************
 * Destructor
*************************/
LinkedList::~LinkedList()
{
   if (isEmpty())
   {
      return;
   }

   else
   {
      Space* garbage = head;
      head = head->left;
      garbage->left = NULL;
      delete garbage;
      garbage = head;
   }
}

/****************************************
 * IsEmpty()
 * checks if linked list is empty
***************************************/
bool LinkedList::isEmpty()
{
   if (head == NULL)
   {
      return true;
   }
   else
   {
      return false;
   }
}


/*********************************
 * addSpace()
 * adds a space to list
*********************************/
void LinkedList::addSpace(Space* s)
{
   Space* space;
   if (isEmpty())
   {
      head = s;
      head->left = NULL;
      head->right = NULL;
      tail = head;
      cout << s->getType() << endl;
   }
   else 
   {
      space = s;
      space->right = tail;
      space->left = NULL;
      tail->left = space;
      tail = space;
      cout << s->getType() << endl;
   }
}

/*****************************************
 * getSpace()
 * return which space pointer points to
********************************************/
std::string LinkedList::getSpace(Space* s)
{
   if (isEmpty())
   {
      return 0;
   }
   else
   {
      return s->getType();
   }
}

/*****************************
 * getPrev()
 * returns previous space
****************************/
void LinkedList::getPrev(Space* s)
{
   if (isEmpty())
   {
      return;
   }
   else
   {
      cout << "You were previously at " << s->right->getType() << endl;
      cout << "Which was: " << endl;
      cout << s->right->getDescrip() << endl; 
   }
}
