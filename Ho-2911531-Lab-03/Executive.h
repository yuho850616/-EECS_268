/* -----------------------------------------------------------------------------
 * File Name: Executive.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab03
 * Description: to read the file
 * Date: 02/13/2018
 ---------------------------------------------------------------------------- */
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Linkedlist.h"
#include "Tabclass.h"
#include "Browser.h"
#include "Node.h"
#include <string>
#include <iostream>

class Executive
{
  public:
    Executive(std::string fileName);
    ~Executive();

  private:
    Linkedlist<std::string> ptr ;
};
#endif
