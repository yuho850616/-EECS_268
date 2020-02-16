/* -----------------------------------------------------------------------------
 * File Name: LinkedListTester.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab02
 * Description: to define all the teseted mode method
 * Date: 02/06/2018
 ---------------------------------------------------------------------------- */
 #include "LinkedListTester.h"
 #include "LinkedList.h"
 #include "Node.h"
void LinkedListTester::runTests()
{
  test01();
  test02();
  test03();
  test04();
  test05();
  test06();
  test07();
  test08();
  test09();
  test10();
  test11();
  test12();
  test13();


}
void LinkedListTester::test01()
{
    LinkedList<int> l;
    std::cout<<"Test #1: Size of empty list is zero:(use isEmpty function): ";
    if(l.isEmpty()==true)
    {
      std::cout<<"passed!\n";
    }
    else
    {
      std::cout<<"failed!\n";
    }
    //l.~LinkedList();
}
void LinkedListTester::test02()
{
    LinkedList<int> l;
    l.insert(1,1);
    std::cout<<"Test #2: Size of empty list is not zero after insert a value(use isEmpty function): ";
    if(l.isEmpty()==false)
    {
      std::cout<<"passed!\n";
    }
    else
    {
      std::cout<<"failed!\n";
    }
    //l.~LinkedList();
}
void LinkedListTester::test03()
{
  LinkedList<int> l;
  std::cout<<"Test #3: Size of empty list is zero:(use getLength function): ";
  if(l.getLength()==0)
  {
    std::cout<<"passed!\n";
  }
  else
  {
    std::cout<<"failed!\n";
  }
  //l.~LinkedList();
}
void LinkedListTester::test04()
{
  LinkedList<int> l;
  l.insert(1,1);
  std::cout<<"Test #4: Size of empty list is not zero after insert a value(use getLength function): ";
  if(l.getLength()!=0)
  {
    std::cout<<"passed!\n";
  }
  else
  {
    std::cout<<"failed\n";
  }
}
void LinkedListTester::test05()
{
  LinkedList<int> l;
  l.insert(1,1);
  l.insert(1,0);
  std::cout<<"Test #5: Size returns correct value after inserting at front of list: ";
  if(l.getLength()==2)
  {
    std::cout<<"Passed!\n";
  }
  else
  {
    std::cout<<"failed\n";
  }
}
void LinkedListTester::test06()
{
  LinkedList<int> l;
  l.insert(1,1);
  l.insert(2,2);
  std::cout<<"Test #6: Size returns correct value after inserting at back of list: ";
  if(l.getLength()==2)
  {
    std::cout<<"Passed!\n";
  }
  else
  {
    std::cout<<"failed\n";
  }
}
void LinkedListTester::test07()
{
  LinkedList<int> l;
  l.insert(1,1);
  l.insert(2,3);
  l.insert(2,2);
  std::cout<<"Test #7: Size returns correct value after inserting at middle of list: ";
  if(l.getLength()==3)
  {
    std::cout<<"Passed!\n";
  }
  else
  {
    std::cout<<"failed\n";
  }
}
void LinkedListTester::test08()
{
  LinkedList<int> l;
  l.insert(1,1);
  l.insert(1,2);
  l.remove(1);
  std::cout<<"Test #8: Size returns correct value after inserting and removing at front of list: ";
  if(l.getLength()==1)
  {
    std::cout<<"Passed!\n";
  }
  else
  {
    std::cout<<"failed\n";
  }
}
void LinkedListTester::test09()
{
  LinkedList<int> l;
  l.insert(1,1);
  l.insert(2,2);
  l.remove(2);
  std::cout<<"Test #9: Size returns correct value after inserting and removing at back of list: ";
  if(l.getLength()==1)
  {
    std::cout<<"Passed!\n";
  }
  else
  {
    std::cout<<"failed\n";
  }
}
void LinkedListTester::test10()
{
  LinkedList<int> l;
  l.insert(1,1);
  l.insert(2,2);
  l.insert(2,2);
  l.remove(2);
  std::cout<<"Test #10: Size returns correct value after inserting and removing at back of list: ";
  if(l.getLength()==2)
  {
    std::cout<<"Passed!\n";
  }
  else
  {
    std::cout<<"failed\n";
  }
}
void LinkedListTester::test11()
{
  LinkedList<int> l;
  l.insert(1,1);
  l.insert(1,0);
  std::cout<<"Test #11: Get the correct value on addfront value(getEntry()): ";
  if(l.getEntry(1)==0)
  {
    std::cout<<"Passed!\n";
  }
  else
  {
    std::cout<<"failed\n";
  }
}
void LinkedListTester::test12()
{
  LinkedList<int> l;
  l.insert(1,1);
  l.insert(2,2);
  std::cout<<"Test #12: Get the correct value on addback value(getEntry()): ";
  if(l.getEntry(2)==2)
  {
    std::cout<<"Passed!\n";
  }
  else
  {
    std::cout<<"failed\n";
  }
}
void LinkedListTester::test13()
{
  LinkedList<int> l;
  l.insert(1,1);
  l.insert(2,3);
  l.insert(2,2);
  std::cout<<"Test #13: Get the correct value on insert value value(getEntry()): ";
  if(l.getEntry(2)==2)
  {
    std::cout<<"Passed!\n";
  }
  else
  {
    std::cout<<"failed\n";
  }
}
