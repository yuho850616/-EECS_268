/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab09
 * Description: to read the command line
 * Date:  04/30/2018
 ---------------------------------------------------------------------------- */
#include "record.h"
#include "heap.h"
#include "executive.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	if(argc>=2)
  {
    std::string filename = argv[1];
    executive eobject(filename);
  }
  else
  {
    std::cout << "Incorrect filename or wrong number of parameters\n";
  }
  return(0);
}
