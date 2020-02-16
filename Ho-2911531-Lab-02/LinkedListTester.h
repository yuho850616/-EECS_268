/* -----------------------------------------------------------------------------
 * File Name: LinkedListTester.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab02
 * Description: to delcare all methods for test mode
 * Date: 02/06/2018
 ---------------------------------------------------------------------------- */
#ifndef LINKED_LIST_TESTER_H
#define LINKED_LIST_TESTER_H
class LinkedListTester
{
    public:
    //LinkedListTester();
    //~LinkedListTester();
    void runTests();
    //@pre include all the private method;
    //@post will show the test result
    //@return none
    private:
    void test01();
    //@pre creates an empty list and verifies isEmpty() returns true
    //@post print out pass or fail
    //@return none
    void test02();
    //@pre creates a list with one element and verifies isEmpty() returns false
    //@post print out pass or fail
    //@return none
    void test03();
    //@pre create an empty list and verified getLength() equal 0
    //@post print out pass or fail
    //@return none
    void test04();
    //@pre create a list is 1 after insert a value
    //@post print out pass or fail
    //@return none
    void test05();
    //@pre create a list addfront length return correct
    //@post print out pass or fail
    //@return none
    void test06();
    //@pre create a list addback length return correct
    //@post print out pass or fail
    //@return none
    void test07();
    //@pre create a list addmiddle length return correct
    //@post print out pass or fail
    //@return none
    void test08();
    //@pre create a list add and remove front length return correct
    //@post print out pass or fail
    //@return none
    void test09();
    //@pre create a list add and remove back length return correct
    //@post print out pass or fail
    //@return none
    void test10();
    //@pre create a list add and remove back length return correct
    //@post print out pass or fail
    //@return none
    void test11();
    //@pre create a list and return the add front value correct
    //@post print out pass or fail
    //@return none
    void test12();
    //@pre create a list and return the add back value correct
    //@post print out pass or fail
    //@return none
    void test13();
    //@pre create a list and return the insert middle value correct
    //@post print out pass or fail
    //@return none


};
#include "LinkedListTester.cpp"
#endif
