/* -----------------------------------------------------------------------------
 * File Name: Node.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab03
 * Description: declare all node methods
 * Date: 02/13/2018
 ---------------------------------------------------------------------------- */
#ifndef NODE_H
#define NODE_H
template <typename T>
class Node
{
  public:
    Node(T value);
    //@pre none
    //@create a new node
    //@return none

    void setValue(T value);
    //@pre None
    //@post set m_value to value in the node
    //@return none

    T getValue()const;
    //@pre none
    //@post none
    //@returns the m_value of node that we choose

    void setNext(Node<T>* next);
    //@pre none
    //@post sets the m_next pointer of chosen node to the node passed in.
    //@return none

     Node<T>* getNext()const;
    //@pre noneone
    //@post noen
    //@return returns the node pointed to by m_next

  private:
    T m_value;
    Node<T>* m_next;
};
#include"Node.cpp"
#endif
