/* -----------------------------------------------------------------------------
 * File Name: Process.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab04
 * Description: to declare the commmand
 * Date: 02/27/2018
 ---------------------------------------------------------------------------- */
#ifndef PROCESS_H
#define PROCESS_H
#include "Node.h"
#include "Linkedlist.h"
#include "Stack.h"
#include <string>
class Process
{
    public:
        //@pre none
        //@post process constructor
        //@return none
        Process();
        //@pre none
        //@post process destructor
        //@return none
        ~Process();
        //@pre none
        //@post to create a new process
        //@return none
        void start(std::string Name);
        //@pre none
        //@post to create a new function under current process
        //@return none
        void call(std::string functionname, std::string exceptionstatus );
        //@pre none
        //@post return the current fucntion
        //@return retrun string function name
        std::string RETURN(); //have to capitalize since cant use the keyword
        //@pre none
        //@post pop the exception.
        //@return None
        void popexception();
        //@pre none
        //@post return the name of the process.
        //@return a string.
        std::string getname();
        //@pre none
        //@post to know the function is yes for exception or no for exception
        //@return a bool.
        bool exceptstatus();

    private:
    Stack<std::string>* ptr; //string type of stack ptr can store the fucntion name as node
    Stack<bool>* ptr2; //need another type of the pointer to store the exception status. since its different type than string stack
    std::string process; // to use a private member to know what's the current process
};
#endif
