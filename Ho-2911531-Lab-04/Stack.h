/* -----------------------------------------------------------------------------
 * File Name: Stack.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab04
 * Description: declare all Stack methods
 * Date: 02/27/2018
 ---------------------------------------------------------------------------- */
 #ifndef STACK_H
 #define STACK_H
 #include "Node.h"
 #include "Stackinterface.h"
 #include <stdexcept>

template <typename T>
class Stack: public Stackinterface<T>
{
public:
    //@pre none
    //@post constructor
    //@return none.
    Stack();
    //@pre none
    //@post delete to avoid memory leaks
    //@retunr none
    ~Stack();
    //@pre none
    //@post return the first value of the Stack
    //@return first value
    T peek() const throw(std::runtime_error);
    //@pre none
    //@post remove front
    //@return none
    void pop() throw(std::runtime_error);
    //@pre none
    //@post add front
    //@return none
    void push(T entry) throw(std::runtime_error);
    //@pre none
    //@post to check is the stack empty or not
    //@return if empty return true, else return false
    bool isEmpty() const; 

    private:
    int m_size;
    Node<T>* m_top; //use node for stack


};
#include"Stack.cpp"
#endif
