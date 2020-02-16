/* -----------------------------------------------------------------------------
 * File Name: Linkedlist.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab03
 * Description: define all Linkedlist method
 * Date: 02/13/2018
 ---------------------------------------------------------------------------- */
#include <iostream>

 template <typename T>
 Linkedlist<T>::Linkedlist()
 {
     m_length = 0;
     m_front = nullptr;
 }

 template <typename T>
 Linkedlist<T>::Linkedlist(const Linkedlist & original)
 {
   m_length = original.getLength();
   Node<T>* temp = m_front;
   for(int i=0; i<m_length-3; i++)
   {
     m_front = new Node<T> (original.getEntry(i));
     temp -> setNext(new Node<T>(original.getEntry(i)));
     temp = temp -> getNext();
   }
 }

 template <typename T>
 Linkedlist<T>::~Linkedlist()
 {
   clear();
 }

 template <typename T>
 Linkedlist<T>&Linkedlist<T>::operator=(const Linkedlist & original)
 {
   clear();
   m_length= new Node<T>(original.getLength());
   Node<T>*temp = m_front;
   for(int i=0; i<=m_length-3; i++)
   {
     m_front = new Node<T>(original.getEntry(i));
     temp -> setNext(new Node<T>(original.getEntry(i)));
     temp = temp -> getNext();
   }
   //return(*this);
 }

 template <typename T>
 bool Linkedlist<T>::isEmpty() const
 {
   if(m_length==0)
   {
     return(true);
   }
   else
   {
     return(false);
   }
 }

 template <typename T>
 int Linkedlist<T>::getLength() const
 {
   return(m_length);
 }

 template <typename T>
 void Linkedlist<T>::insert(int position, T entry) throw (std::runtime_error)
 {
   if (position==1)
   {
     Node<T>* temp = new Node<T>(entry);
     temp -> setNext(m_front);
     m_front = temp;
     m_length++;
   }
   else if (position == (m_length+1))
   {
     Node<T>* ptr = m_front;
     while (ptr->getNext()!=nullptr)
     {
       ptr = ptr ->getNext();
     }
     Node<T>* ptr2 = new Node<T> (entry);
     ptr->setNext(ptr2);
     m_length++;
   }
   else if (position>1 && position<(m_length+1))
   {
     Node<T>* ptr2 = new Node<T>(entry);
     Node<T>* ptr1 = m_front;
     for(int i=0;i<position-2;i++)
     {
       ptr1 = ptr1 -> getNext();
     }
     ptr2->setNext(ptr1->getNext());
     ptr1->setNext(ptr2);
     m_length++;
   }
   else
   {
     throw(std::runtime_error("Position is not valid. It should be bigger than zero and smaller than length+2"));
   }
 }

 template <typename T>
 void Linkedlist<T>::remove(int position) throw (std::runtime_error)
 {
   if(position==1)
   {
     Node<T>* ptr = m_front->getNext();
     delete m_front;
     m_front = ptr;
     m_length--;
   }
   else if(position==m_length)
   {
     Node<T>* ptr1 = m_front;
     Node<T>* ptr2;
     while(ptr1->getNext() != nullptr)
     {
     		ptr2 = ptr1;
     		ptr1 = ptr1->getNext();
     }
     delete ptr1;
     ptr2 -> setNext(nullptr);
     m_length--;
   }
   else if(position<m_length && position>1)
   {
     Node<T>* ptr =m_front -> getNext();
     Node<T>* ptr2 = m_front;
     for(int i=0; i<position-2 ;i++)
     {
       ptr = ptr -> getNext();
       ptr2= ptr2->getNext();
     }
       ptr2->setNext(ptr->getNext());
       delete ptr;
       m_length--;
   }
   else if(position<1 || position>m_length)
   {
     throw(std::runtime_error("Position is not valid. It should be bigger than zero and smaller than length+1"));
   }


 }

 template <typename T>
 void Linkedlist<T>::clear()
 {
   for(int i=0; i<m_length; i++)
   {
       Node<T>* ptr = m_front;
       m_front = ptr->getNext();
       delete ptr;
   }
 }

 template <typename T>
 T Linkedlist<T>::getEntry(int position) const throw (std::runtime_error)
 {
   if(position>0 && position<=m_length)
   {
     Node<T>* ptr = m_front;
     for(int i=1; i<position; i++)
     {
       ptr = ptr -> getNext();
     }
     return(ptr -> getValue());
   }
   else
   {
     throw(std::runtime_error("Position is not valid. It should be bigger than zero and smaller than length+1"));
   }
 }

 template <typename T>
 void Linkedlist<T>::replace(int position, T newEntry) throw (std::runtime_error)
 {
   if(position==1)
   {
     Node<T>*ptr2 = new Node<T>(newEntry);
     Node<T>*ptr = m_front->getNext();
     ptr2 -> setNext(ptr);
     m_front = ptr2;
   }
   else if(position>1 && position<m_length+1)
   {
     Node<T>* ptr1 = m_front;
     for(int i=1; i<position-1; i++)
     {
         ptr1 = ptr1 ->getNext();
     }
     Node<T>* ptr2 = new Node<T>(newEntry);
     Node<T>* ptr3 = ptr1 ->getNext()->getNext();
     delete ptr1 ->getNext();
     ptr1 ->setNext(ptr2);
     ptr2 ->setNext(ptr3);
   }
   else
   {
     throw(std::runtime_error("Position is not valid. It should be bigger than zero and smaller than length+1"));
   }

 }
