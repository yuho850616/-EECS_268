/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab05
 * Description: to define the palindrome function
 * Date: 03/06/2018
 ---------------------------------------------------------------------------- */
#include "palindromechecker.h"

bool palindromechecker::Palindrome(std::string wordname)
{
    firstcharacter = wordname.substr(0,1);
    lastcharacter = wordname.substr(wordname.length()-1,1);
    f = firstcharacter[0];
    l = lastcharacter[0];

    if (tolower(f)!=tolower(l))
    {
        return (false);
    }

    else
    {
      wordname = wordname.substr(0+1,wordname.length()-2);
      if(wordname.length()<=1)
      {
        return(true);
      }
    }
    return(Palindrome(wordname));
}
