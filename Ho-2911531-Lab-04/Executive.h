/* -----------------------------------------------------------------------------
 * File Name: Executive.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab04
 * Description: to read the file
 * Date: 02/27/2018
 ---------------------------------------------------------------------------- */
  #ifndef EXECUTIVE_H
  #define EXECUTIVE_H
  #include<string>
  #include<iostream>
  #include"Stackinterface.h"
  #include"Process.h"
  #include"Node.h"

class Executive
{
    private:
    Linkedlist<Process>* lptr; //process is Linkedlist, function is stack

    public:
       //@pre none
       //@post to read the file
       //@return none
       Executive(std::string fileName);
       ~Executive();
       //@pre none
       //@post create a new process in Linkedlist
       //@return None.
       void createprocess(std::string processname);
       //@pre none
       //@post push the function name in stack and puch the exception status in another stack
       //@return none.
       void createfunction(std::string processname,std::string functionname, std::string status);
      //@pre none
      //@post to see which function has "y" to handle exception
      //@return none.
      void throwexception(std::string processname);
      //@pre none
      //@post print out all the process and their current process
      //@return none.
      void Printouput();

};
#endif
