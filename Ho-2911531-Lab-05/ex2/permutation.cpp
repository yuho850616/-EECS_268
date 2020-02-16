/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab05
 * Description: to define the permutation function
 * Date: 03/06/2018
 ---------------------------------------------------------------------------- */
#include"permutation.h"
#include <iostream>


void permutation::permu(int value)
{
  //current = total - value;
  if(value == 0)
  {
    std::cout<<"0"<<"\n";
  }
  else if(value == 1)
  {
    std::cout<<1<<"\n";
    //permu(value-1);
  }
  else
  {
      std::cout<<value<<"\n";
  }
}
