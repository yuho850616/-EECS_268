
/* -----------------------------------------------------------------------------
 * File Name: Listinterface.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab03
 * Description: to share the method
 * Date: 02/13/2018
 ---------------------------------------------------------------------------- */
#include <iostream>
using namespace std;

#ifndef LIST_INTERFACE_H
#define LIST_INTERFACE_H
template <typename T>
class Listinterface
{

      public:
      virtual ~Listinterface(){}
      //@pre ListInterface object
      //@post delete the ListInterface object
      //@return none

      virtual bool isEmpty() const = 0;
      //@pre none
      //@post none
      //@return true if is empty, return false is not empty

      virtual int getLength() const = 0;
      //@pre none
      //@post none
      //@return return length

      virtual void insert(int position, T entry) throw (std::runtime_error) = 0;
      //@pre let the user to pick value and position to insert into list
      //@post insert a new node into LinkedList
      //@return none

      virtual void remove(int position) throw (std::runtime_error) = 0;
      //@pre let the user pick position to remove node in LinkedList
      //@post remove a node in linkedlist
      //@return none

      virtual void clear() = 0;
      //@pre to avoid memonry leaks
      //@post delete all the nodes in linkedlist
      //@return none

      virtual T getEntry(int position) const throw (std::runtime_error) = 0;
      //@pre input a position to find that value
      //@post to get the value from the selected position
      //@return to return an int

      virtual void replace(int position, T newEntry) throw (std::runtime_error) = 0;
      //@pre let user to pick and postion and replace with new value
      //@post selected position will get a new value
      //@return none
 };
#endif
