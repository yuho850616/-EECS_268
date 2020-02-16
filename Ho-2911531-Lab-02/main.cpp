/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab02
 * Description: to set the flag for interactice mode or test mode
 * Date: 02/06/2018
 ---------------------------------------------------------------------------- */
#include<iostream>
#include<string>
#include"LinkedList.h"
#include"Node.h"
#include"LinkedListTester.h"
#include<stdexcept>



int main(int argc, char** argv)
{
  if(argc<2)
  {
    std::cout<<"Incorrect number of parameters.\n";
  }
  else
  {
        std::string flag = argv[1];
        if(flag == "-i")
        {
          LinkedList<int> l;
          int choice = 0;
          while(choice!=6)
          {
            std::cout<<"Make a selection: \n";
            std::cout<<"1) Insert value at position\n";
            std::cout<<"2) Remove at position \n";
            std::cout<<"3) Replace value at position\n";
            std::cout<<"4) Print length\n";
            std::cout<<"5) Print list\n";
            std::cout<<"6) Exit\n";
            std::cout<<"Choice: ";
            std::cin>>choice;
            if(choice == 1)
            {
              int entry=0;
              int position=0;
              std::cout<<"Enter the value you want to insert: ";
              std::cin>>entry;
              bool stop = true;
              while(stop==true)
              {
                std::cout<<"Enter a position you want to insert: ";
                std::cin>>position;
                try
                {
                  l.insert(position,entry);
                  stop = false;
                }
                catch(std::runtime_error&rte)
                {
                  std::cout<<rte.what()<<'\n';
                }
              }
            }
            else if(choice == 2)
            {
              int position;
              bool stop = true;
              while(stop==true)
              {
                std::cout<<"Enter a position you want to remove: ";
                std::cin>>position;
                try
                {
                  l.remove(position);
                  stop=false;
                }
                catch(std::runtime_error&rte)
                {
                  std::cout<<rte.what()<<"\n";
                }
              }
            }
            else if(choice == 3)
            {
              int entry=0;
              int position=0;
              std::cout<<"Enter the value you want to replace in: ";
              std::cin>>entry;
              bool stop = true;
              while(stop==true)
              {
                std::cout<<"Enter a position you want to replace: ";
                std::cin>>position;
                try
                {
                  l.replace(position,entry);
                  stop = false;
                }
                catch(std::runtime_error&rte)
                {
                  std::cout<<rte.what()<<'\n';
                }
              }

            }
            else if(choice == 4)
            {
              l.printlength();
            }
            else if(choice==5)
            {
              l.printlist();
            }
            else if(choice<1 || choice>6)
            {
              std::cout<<"Please input choice from 1 - 6 !\n";
            }
          }
        }
        else if(flag == "-t")
        {
          LinkedListTester test; // create object to run the function
          test.runTests();
        }
        else
        {
          std::cout<<"Flag needs to be i or t!\n";
        }
  }
return(0);
}
