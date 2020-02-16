/* -----------------------------------------------------------------------------
 * File Name: Tabclass.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab03
 * Description: define all function to control url
 * Date: 02/13/2018
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <string>
#include "Tabclass.h"

Tabclass::Tabclass()
{
  ptr = new Linkedlist<std::string>;
  curpos = 0;
}

Tabclass::~Tabclass()
{
  ptr -> clear(); //memory leaks
}

void  Tabclass::navigateTo(std::string url)
{
  ptr -> insert(ptr->getLength()+1, url); //since we navigate to one website, we insert one at the end of ur linkedlist
  curpos++; // curpos auto goes to the new url
  length++;
}

void Tabclass::forward()
{
  if(curpos < ptr->getLength()) // when pos is smaller than length, it can go forward to next post
  {
    curpos++;  //move cur pos to next node in linkedlist
  }
}

void Tabclass::back()
{
  if(curpos >1 ) // when pos bigger than 1, then it will have space to go back
  {
    curpos--; // move cur pos back to the previous node in linkedlist
  }
}

std::string Tabclass::current() const
{
  return(ptr->getEntry(curpos));   //point the current position
}

void Tabclass::copyCurrentHistory(Listinterface<std::string>& destination)
{
  destination = *ptr; //derefernce. SI leader taught, still a bit confused
}

void Tabclass::print()
{
  for(int i=1; i<=length ;i++)
  {
    if(ptr->getEntry(i) == current())
    {
      std::cout<<current()<<" <= current\n";
    }
    else
    {
      std::cout<<ptr->getEntry(i)<<"\n";
    }
  }
}
void Tabclass::open()
{
  ptr = new Linkedlist<std::string>();
  length=0;
  curpos =0;
}
