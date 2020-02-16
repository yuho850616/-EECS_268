/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab03
 * Description: to run the whole program
 * Date: 02/13/2018
 ---------------------------------------------------------------------------- */
 #include<iostream>
 #include"Node.h"
 #include"Linkedlist.h"
 #include"Tabclass.h"
 #include"Browser.h"
 #include"Executive.h"
 #include<string>
 #include<fstream>



 int main(int argc, char* argv[])
 {
   std::ifstream read;
   std::string fileName;
   fileName=argv[1];
   read.open(fileName);

   if(argc>1 &&read.is_open())
   {
     Executive ex(fileName);
   }

   else
   {
     std::cout << "Incorrect number of parameeters or wrong text name\n";
   }

   return(0);
 }
