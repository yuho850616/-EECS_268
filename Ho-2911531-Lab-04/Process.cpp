/* -----------------------------------------------------------------------------
 * File Name: Process.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab04
 * Description: to define the commmand
 * Date: 02/27/2018
 ---------------------------------------------------------------------------- */
#include"Process.h"
#include<string>
Process::Process()
{
    ptr = new Stack<std::string>();
    ptr2 = new Stack<bool>();
}

Process::~Process()
{

}

void Process::start(std::string Name)
{
    ptr -> push("main");
    ptr2 -> push("n");
    process = Name;
}

void Process::call(std::string functionname, std::string exceptionstatus )
{
    bool status;
    if(exceptionstatus =="y")
    {
        status=true;
    }
    else
    {
        status=false;
    }
    ptr->push(functionname);
    ptr2->push(status);
}

std::string Process::RETURN()
{
    return(ptr->peek());
}

void Process::popexception()
{
    ptr->pop();
    ptr2->pop();
}

bool Process::exceptstatus()
{
    return(ptr2->peek());
}

std::string Process::getname()
{
    return(process);
}
