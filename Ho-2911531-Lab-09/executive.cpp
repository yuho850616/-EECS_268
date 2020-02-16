/* -----------------------------------------------------------------------------
 * File Name: executive.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab09
 * Description: to read the file and run the program
 * Date:  04/30/2018
 ---------------------------------------------------------------------------- */
 #include "executive.h"
 #include "heap.h"
 #include <iostream>
 #include <fstream>
 #include <string>

executive::executive(std::string filename)
{
  std::ifstream read;
  read.open(filename);
  heap<record> hobject;
  while(!read.eof())
  {
    std::string temp;
    getline(read,temp);
    int space = temp.find(' ');
    std::string temp2=temp.substr(0,space);
    record robject=record();

    if(temp2=="ARRIVE")
    {
      temp = temp.substr(temp.find(" ")+1, temp.length());
      std::string firstname = temp.substr(0,temp.find(" "));
      temp = temp.substr(temp.find(" ")+1, temp.length());
      std::string lastname =  temp.substr(0,temp.find(" "));
      temp = temp.substr(temp.find(" ")+1, temp.length());
      int age = stoi(temp.substr(0, temp.find(" ")));
      temp = temp.substr(temp.find(" ")+1, temp.length());
      std::string illness = temp.substr(0,temp.find(" "));
      temp = temp.substr(temp.find(" ")+1, temp.length());
      int severity = stoi(temp.substr(0, temp.find(" ")));
      robject.setfirstname(firstname);
      robject.setlastname(lastname);
      robject.setage(age);
      robject.setillness(illness);
      robject.setseverity(severity);
      hobject.add(robject);
      // std::cout<<firstname<<lastname<<age<<illness<<severity<<"\n";
    }
    else if(temp2=="COUNT")
    {
      std::cout<<"There are(is)"<<hobject.getNumberOfNodes()<<" patients waiting.\n";
    }
    else if(temp2=="NEXT")
    {
      std::cout<<"Next patient:\n";
      std::cout<<"\t"<<"Name: "<<hobject.peekTop().getlastname()<<','<<hobject.peekTop().getfirstname()<<'.'<<"\n";
      std::cout<<"\t"<<"Age: "<<hobject.peekTop().getage()<<"\n";
      std::cout<<"\t"<<"Suffers from: "<<hobject.peekTop().getillness()<<"\n";
      std::cout<<"\t"<<"Illness severity: "<<hobject.peekTop().getseverity()<<"\n\n";
    }
    else if(temp2=="TREAT")
    {
      try
        {
            hobject.remove();
        }
        catch(std::runtime_error &rte)
        {
            std::cout<<rte.what();
        }
    }
  }
}
