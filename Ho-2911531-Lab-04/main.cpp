/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab04
 * Description: to make start the program with two command
 * Date: 02/27/2018
 ---------------------------------------------------------------------------- */
 #include<iostream>
 #include"Node.h"
 #include"Linkedlist.h"
 #include"Stack.h"
 #include"Process.h"
 #include"Executive.h"
 #include<string>
 #include<fstream>

 int main(int argc, char* argv[])
 {

   if(argc==2)
   {
     std::ifstream read;
     std::string fileName = argv[1];
     read.open(fileName);
     Executive eobject(fileName);
   }

   else
   {
     std::cout << "Incorrect number of parameeters or wrong text name\n";
   }

   return(0);
 }
