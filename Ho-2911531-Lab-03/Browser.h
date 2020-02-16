/* -----------------------------------------------------------------------------
 * File Name: Browser.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab03
 * Description: to control the tab
 * Date: 02/13/2018
 ---------------------------------------------------------------------------- */
#ifndef BROWSER_H
#define BROWSER_H
#include "Node.h"
#include "Linkedlist.h"
#include "Tabclass.h"

class Browser
{
  public:
    Browser();
    //@pre none
    //@post constructor
    //@retunr none
    ~Browser();
    //@pre none
    //@post destructor
    //@retun none
    void newtab();
    //@pre none
    //@post to create a new tab
    //@return none
    void Focus(int pos);
    //@pre none
    //@post to foucs on specifc tab
    //@return none
    void Moveleft(int pos);
    //@pre none
    //@post to move multiple times to left
    //@return none
    void MoveRight(int pos);
    //@pre none
    //@post to move multiple times to right
    //@return none
    int tabnumber();
    //@pre none
    //@post to store the current tab number
    //@return current tab number
  private:
    Linkedlist<Tabclass>* temp;
    int tabposition;
};
#endif
