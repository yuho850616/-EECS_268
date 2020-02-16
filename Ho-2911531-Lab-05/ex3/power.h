/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab05
 * Description: to declare the pow outage funtction
 * Date: 03/06/2018
 ---------------------------------------------------------------------------- */
#ifndef POWER_H
#define POWER_H

class power
{
  public:
    //@pre none
    //@post to pass the power outage value
    //@return a int value 
    int pow(int base, int exponent);

  private:
    int num;

};
#endif
