/* -----------------------------------------------------------------------------
 * File Name: Tabclass.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab03
 * Description: declare all functions for control url
 * Date: 02/13/2018
 ---------------------------------------------------------------------------- */
#ifndef TAB_CLASS_H
#define TAB_CLASS_H
#include "Linkedlist.h"
#include "Tabinterface.h"
#include <string>


class Tabclass : public Tabinterface<std::string>
{
  public:
    Tabclass();
    //@pre none
    //@post create constructor
    //@return none
    ~Tabclass();
    //@pre none
    //@post deleter all pointers to avoid memory leaks
    //@return none
    void navigateTo(std::string url);
    //@pre none
    //@post the browser navigate to the given url
    //@return url, a string representing a URL
    void forward();
    //@pre none
    //@post if possible, the browser navigates forward in the history otherwise it keeps focus on the current URL
    //@return none
    void back();
    //@pre none
    //@post if possible, the browser navigates backwards in the history otherwise it keeps focus on the current URL
    //@return none
    std::string current() const;
    //@pre none
    //@post none
    //@return the URL currently open in the tab
    void copyCurrentHistory(Listinterface<std::string>& destination);
    //@pre The list being passed in is empty
    //@post The current browser history is copied into the given list
    //@param destination, an empty list of strings
    void print();// extra, not on the wiki
    //@pre none
    //@print the file
    //@return none
    void open(); //extra, not on the wiki
    //@pre none
    //@post to connect with the execute file
    //@return none 


  private:
    Listinterface<std::string>* ptr;
    int curpos;
    int length;
};
#endif
