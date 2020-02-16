/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab05
 * Description: to declare the palindrome function
 * Date: 03/06/2018
 ---------------------------------------------------------------------------- */
#ifndef PALINDROMECHECKER_H
#define PALINDROMECHECKER_H
#include <string>

class palindromechecker
{
  private:
    std::string firstcharacter; //firstcharacter in the string
    std::string lastcharacter; // lastcharacter in the string
    char f;
    char l;

  public:
    //@pre none
    //@post to check is the string palindrome or not
    //@return true or false
    bool Palindrome(std::string wordname);

};
#endif
