/* -----------------------------------------------------------------------------
 * File Name: Tabinterface.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab03
 * Description: to share the tabclass method
 * Date: 02/13/2018
 ---------------------------------------------------------------------------- */
#ifndef TABINTERFACE_H
#define TABINTERFACE_H
#include <string>
#include "Listinterface.h"
template<typename T>
class Tabinterface
{
  public:

    virtual ~Tabinterface(){}
    //@pre none
    //@post All memory allocated by the implementing class should be freed. This, as with all virtual destrucors, is an empty definition since we have no knowledge of specific implementation details.
    //@return none

   virtual void navigateTo(std::string url) = 0;
   //@pre none
   //@post the browser navigate to the given url
   //@return url, a string representing a URL

   virtual void forward() = 0;
   //@pre none
   //@post if possible, the browser navigates forward in the history otherwise it keeps focus on the current URL
   //@return none

   virtual void back() = 0;
   //@pre none
   //@post if possible, the browser navigates backwards in the history otherwise it keeps focus on the current URL
   //@return none

   virtual std::string current() const = 0;
   //@pre none
   //@post none
   //@return the URL currently open in the tab

   virtual void copyCurrentHistory(Listinterface<std::string>& destination) = 0;
   //@pre The list being passed in is empty
   //@post The current browser history is copied into the given list
   //@param destination, an empty list of strings
 };
#endif
