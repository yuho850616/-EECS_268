/* -----------------------------------------------------------------------------
 * File Name: Stack.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab04
 * Description: define all Stack method
 * Date: 02/27/2018
 ---------------------------------------------------------------------------- */
#include<stdexcept>
#include"Node.h"
#include"Linkedlist.h" //to call the Linkedlist function

template <typename T>
Stack<T>::Stack()
{
    m_top=nullptr;
    m_size=0;
}

template <typename T>
Stack<T>::~Stack()
{
  for(int i=0; i<m_size; i++)
  {
     Node<T>* ptr = m_top;
     m_top = ptr->getNext();
     delete ptr;
  }
}

template <typename T>
T Stack<T>::peek()const throw(std::runtime_error)
{
  if(isEmpty()==true)
  {
    throw(std::runtime_error("Can't look at the first value of empty stack"));
  }
    else
    {
        return(m_top->getValue());
    }
}
template <typename T>
void Stack<T>::pop() throw(std::runtime_error)
{
  if(isEmpty()==true)
  {
      throw(std::runtime_error("Can't remove the empty stack"));
  }
  else
  {
    Node<T>* ptr = m_top->getNext();
    delete m_top;
    m_top = ptr;
    m_size--;
  }
}

template <typename T>
void Stack<T>::push(T entry) throw(std::runtime_error)
{
    if(isEmpty()==true)
    {
        Node<T>* temp =new Node<T>(entry);
        m_top=temp;
        m_size++;
    }
    else
    {
      Node<T>* temp = new Node<T>(entry);
      temp -> setNext(m_top);
      m_top = temp;
      m_size++;
    }
}

template <typename T>
bool Stack<T>::isEmpty()const
{
    if(m_size==0)
    {
        return(true);
    }
    else
    {
        return(false);
    }
}
