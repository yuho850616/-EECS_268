/* -----------------------------------------------------------------------------
 * File Name: Node.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab02
 * Description: To list all methods, variables for node class
 * Date:  02/06/2018
 ---------------------------------------------------------------------------- */
#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
  private:
    T m_value;
    Node<T>* m_next;

  public:
    Node(T value);
    //@pre none
    //@post make the contructor to set m_sext to nullptr and m_value to 0
    //@return none
    T getValue()const;
    //@pre none
    //@post pass value into the node
    //@return value that in the node
    void setValue(T value);
    //@pre to pass in a int
    //@post m_value will equal to the value pass in
    //@return none
    Node <T>* getNext()const;
    //@pre none
    //@post turn the pointer to the next node in list
    //@return next pointer
    void setNext(Node<T>*next);
    //@pre to pass in a node pointer
    //@post set the node pass in equal to m_next in list;
    //@return none
};
#include "Node.cpp"
#endif
