/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab05
 * Description: to check the palindrome
 * Date: 03/06/2018
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include "palindromechecker.h"


int main(int argc, char** argv)
{
  if(argc<2)
  {
    std::cout<<"Please put a word in command line.\n";
  }
  else
  {
    palindromechecker pobject;
    std::string word = argv [1];
    if (pobject.Palindrome(word)==true)
    {
      std::cout<<word<<" is a palindrome!\n";
    }
    else
    {
      std::cout<<word<<" is not a palindrome. \n" ;
    }
    return (0);
  }
}
