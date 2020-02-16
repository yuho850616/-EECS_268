/* -----------------------------------------------------------------------------
 * File Name: Stackinterface.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab04
 * Description: share the stack method
 * Date: 02/27/2018
 ---------------------------------------------------------------------------- */
 #ifndef STACK_INTERFACE_H
 #define STACK_INTERFACE_H
 #include <stdexcept>


 template <typename T>
 class Stackinterface
 {
      public:
      //@pre Stackinterface object
      //@post delete Stackinterface object
      //@return none
      virtual ~Stackinterface(){}
      //@pre none
      //@post return the first value of the Stack
      //@return first value
      virtual T peek() const throw(std::runtime_error) = 0;
      //@pre none
      //@post remove front
      //@return none
      virtual void pop() throw(std::runtime_error) = 0;
      //@pre none
      //@post add front
      //@return none
      virtual void push(T entry) throw(std::runtime_error) = 0; //allows for option not required to throw exception
      //@pre none
      //@post to check is the stack empty or not
      //@return if empty return true, else return false
      virtual bool isEmpty() const = 0;
 };
 #endif
