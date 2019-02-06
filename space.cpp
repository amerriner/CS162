/******************************************
 * program name: space.cpp
 * author: Ashley Merriner
 * date: 3.18.18
 * description: implementation file for 
 * space class.
*********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "space.hpp"
#include "kitsune.hpp"

using namespace std;

Space::Space()
{
   this->top = NULL;
   this->right = NULL;
   this->bottom = NULL;
   this->left = NULL;
}
