/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab06
 * Description: to output the pow outage
 * Date: 03/27/2018
 ---------------------------------------------------------------------------- */
#include <iostream>
#include "knight.h"



int main(int argc, char** argv)
 {
     if(argc<3)
     {
         std::cout<<"Please input two numbers in commnad line\n";
     }
     else
     {
          int row = atoi(argv[1]) ;
          int col = atoi(argv[2]);
          knight kobject(row, col);
          kobject.knightcheck();
      }
     return(0);
 }
