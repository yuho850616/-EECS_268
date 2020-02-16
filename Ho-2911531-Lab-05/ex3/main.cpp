/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab05
 * Description: to output the pow outage
 * Date: 03/06/2018
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <string>
#include "power.h"

int main(int argc, char** argv)
{
    if(argc<3)
    {
        std::cout<<"Please input two numbers in commnad line\n";
    }
    else
    {
        power pobject;
        int base = atoi(argv[1]) ;
        int exponent = atoi(argv[2]);
        std::cout<<base<<"^"<<exponent<<"="<<pobject.pow(base,exponent)<<"\n";
    }
}
