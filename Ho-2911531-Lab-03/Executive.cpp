/* -----------------------------------------------------------------------------
 * File Name: Executive.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab03
 * Description: to read the file
 * Date: 02/13/2018
 ---------------------------------------------------------------------------- */
#include "Executive.h"
#include <limits>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

Executive::Executive(std::string fileName)
{
  std::ifstream read;
  read.open(fileName);
  Browser bobject; //create browser object to call the function
  Tabclass tobject; //create tabclass object to call the function
  std::string temp;
  std::string stop;
  std::string temp2;


  while(!read.eof()) //keep printing out and working until the end of file
  {
    getline(read,temp); // to get whole line
    int space = temp.find(' '); //stop at space since there is nothing at the back
    stop = temp.substr(0,space); //from 0 to nothing at the back
    int curpos = 0;
    if(stop=="NEW_TAB")
    {
      bobject.newtab();
      tobject.open();
    }
    else if(stop=="FOCUS")
    {
      curpos = stoi(temp.substr(space+1));
      bobject.Focus(curpos);
    }

    else if(stop=="MOVE_LEFT")
    {
      temp2 = stoi(temp.substr(space+1));
      //bobject.Moveleft(temp2);
    }

    else if(stop=="MOVE_RIGHT")
    {
      temp2 =stoi(temp.substr(space+1));
      //bobject.Moveright(temp2);
    }

    else if(stop=="NAVIGATE")
    {
      temp2 = temp.substr(space+1);
      tobject.navigateTo(temp2);
    }

    else if(stop=="BACK")
    {
      tobject.back();
    }

    else if(stop=="FORWARD")
    {
      tobject.forward();
    }

    else if(stop=="HISTORY")
    {
      std::cout<<"Tab "<<bobject.tabnumber()<<"\n";
      std::cout<<"===========\n";
      tobject.print();
      std::cout<<"===========\n";
      std::cout<<"Newest\n\n";
    }
  }
}

Executive::~Executive()
{

}
