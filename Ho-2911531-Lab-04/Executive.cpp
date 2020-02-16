/* -----------------------------------------------------------------------------
 * File Name: Executive.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab04
 * Description: to read the file
 * Date: 02/27/2018
 ---------------------------------------------------------------------------- */
 #include"Executive.h"
 #include"Process.h"
 #include<iostream>
 #include<string>
 #include<fstream>
 #include"Linkedlist.h"

 void Executive::createprocess(std::string processname)
 {
     Process pobject; //to create an object to call function
     pobject.start(processname);
     lptr->insert(lptr->getLength()+1,pobject);

 }
 void Executive::createfunction(std::string processname,std::string functionname, std::string status)
 {
     int num=0;
     for(int i= 1;i<=lptr->getLength();i++) //have to set i to 1 since getentry will throw exception at 0
     {
         if(lptr->getEntry(i).getname()==processname)
         {
             num = i ;
         }
     }
     lptr->getEntry(num).call(functionname,status);
 }

 void Executive::throwexception(std::string processname) //have to set i to 1 since getentry will throw exception at 0
 {
    int num =0;
    for(int i=1; i<=lptr->getLength(); i++)
    {
        if(lptr->getEntry(i).getname() == processname)
        {
            Process pobject = lptr -> getEntry(i);
            while(pobject.exceptstatus()!=true)
            {
                pobject.popexception();
                num++;
            }
            lptr->replace(i,pobject);
        }

    }
 }

 void Executive::Printouput()
 {
     std::cout<<"Process_name [function_name]\n";
     std::cout<<"====================\n";
     for(int i = 1;i<=lptr->getLength();i++) //have to set i to 1 since getentry will throw exception at 0
     {
         std::cout<<lptr->getEntry(i).getname()<<"["<<lptr->getEntry(i).RETURN()<<"]\n";
     }
 }

 Executive::Executive(std::string fileName)
 {
    lptr = new Linkedlist<Process>();
    std::ifstream read;
    read.open(fileName);
    std::string stop;
    std::string temp;

    while(!read.eof()) //until the end of the file
    {
          getline(read,temp);
          int space = temp.find(' ');
          stop = temp.substr(0,space);
          if(stop=="START")
          {
              std::string temp2 = temp.substr(space+1);
              int space1 = temp2.find(' ');
              std::string process = temp2.substr(0,space1);
              createprocess(process);
          }
             else if(stop=="CALL")
             {
               std::string temp2 = temp.substr(space+1);
               int space1 = temp2.find(' ');
               std::string process = temp2.substr(0,space1);
               std::string temp3 = temp2.substr(space1+1);
               int space2 = temp3.find(' ');
               std::string function =temp3.substr(0,space2);
               std::string temp4 = temp3.substr(space2+1);
               int space3 = temp4.find(' ');
               std::string status = temp4.substr(0,space3);
              createfunction(process,function,status);
             }
             else if(stop=="THROW")
             {
               std::string temp2 = temp.substr(space+1);
               int space1 = temp2.find(' ');
               std::string process = temp2.substr(0, space1);;
               throwexception(process);
             }
             else if(stop=="PRINT")
             {
                 Printouput();
             }
         }

 }
 Executive::~Executive()
 {

 }
