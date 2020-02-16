/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab05
 * Description: to permutation the number
 * Date: 03/06/2018
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <string>
#include "permutation.h"

int main(int argc,char** argv)
{
  if(argc<2)
  {
    std::cout<<"Input a number after Makefile name\n";
  }
  else
  {
    permutation pobject;
    int number = atoi(argv[1]);
    pobject.permu(number);
  }
  return (0);
}
