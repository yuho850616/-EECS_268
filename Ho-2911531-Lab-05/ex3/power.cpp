/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab05
 * Description: to define the power outage function
 * Date: 03/06/2018
 ---------------------------------------------------------------------------- */
#include "power.h"

int power::pow(int base, int exponent)
{
    if(exponent==0)
    {
        int value = 1;
        return(value);
    }
    else if(exponent%2==0)
    {
      num = pow(base,(exponent/2));
      int square = num * num;
      return(square);
    }
    else if(exponent%1==0)
    {
      num = pow(base,(exponent/2));
      return(base*num*num);
    }
    return(0);
}
