/* -----------------------------------------------------------------------------
 * File Name: heap.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab09
 * Description: to declare the heap method
 * Date:  04/30/2018
 ---------------------------------------------------------------------------- */
#ifndef HEAP_H
#define HEAP_H
#include <iostream>
#include <string>
// #include "heapinterface.h"
#include <stdexcept>
template <typename T>
class heap       //: public: heapinterface<T>
{
private:
  int numnodes;
  int m_size;
  T*m_arr;
  void resize(); //lecture note on 4/20 friday
  void downheap(int index); //lecture note on 4/20 friday
  void upheap(int index); //lecture note on 4/20 friday

public:
  //@pre none
  //@post to create constructor
  //@return none
  heap();
  //@pre none
  //@post destrutor to avoid memory leaks
  //@return none
  ~heap();
  //@pre none
  //@post to check is heap empty or not
  //@return true if empty else false
  bool isEmpty() const;
  //@pre none
  //@post to return how many nodes in heap
  //@return int type ;
  int getNumberOfNodes() const;
  int getHeight() const;
  //@pre none
  //@post to return the first value in array;
  //@return T type
  T peekTop() const throw(std::runtime_error);
  //@pre none
  //@post to add nodes
  //@return none
  void add(T data);
  //@pre none
  //@post remove the root
  //@return none
  void remove()throw(std::runtime_error);
  void clear();

};
#include "heap.cpp"
#endif
