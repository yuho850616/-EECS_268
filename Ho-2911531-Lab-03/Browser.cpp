/* -----------------------------------------------------------------------------
 * File Name: Browser.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab03
 * Description: to define method for tab
 * Date: 02/13/2018
 ---------------------------------------------------------------------------- */
#include "Browser.h"
#include "Linkedlist.h"

Browser::Browser()
{
  temp = new Linkedlist<Tabclass>;
  tabposition = 0;
}

Browser::~Browser()
{
  temp -> clear();
}

void Browser::newtab()
{
  Tabclass object;
  temp->insert(temp->getLength()+1, object);
  tabposition++;
}


void Browser::Focus(int pos)
{
  for(int i=0; i<temp->getLength(); i++)
  {
    tabposition= pos;
    temp->getEntry(pos);
  }

}

void Browser::Moveleft(int pos)
{
    int temppos=0;
    temppos = (*this).tabposition -pos;
    (*this).tabposition = temppos;
    temp->getEntry(temppos);

}

void Browser::MoveRight(int pos)
{
    int temppos=0;
    temppos = (*this).tabposition + pos;
    (*this).tabposition = temppos;
    temp->getEntry(temppos);

}
int Browser::tabnumber()
{
  return(tabposition);
}
