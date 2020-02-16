/* -----------------------------------------------------------------------------
 * File Name: Linkedlist.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab04
 * Description: declare all Linkedlist methods
 * Date: 02/27/2018
 ---------------------------------------------------------------------------- */
 #ifndef LINKED_LIST_H
 #define LINKED_LIST_H
 #include "Node.h"
 #include <stdexcept>
 template <typename T>
 class Linkedlist
 {
      private:

        Node<T>* m_front;
        int m_length;

      public:

        Linkedlist();
        //@pre none
        //@post create constructor and set m_length equal to 0 and m_next equal to no pointer
        //@return none
        Linkedlist(const Linkedlist& original);
        //@pre to make a deep copy
        //@post make new a copy
        //@return none
        ~Linkedlist();
        //@pre to avoid memonry leaks
        //@post delete node in linkedlist
        //@return none
        Linkedlist& operator=(const Linkedlist& original);
        //@pre to make a deep copy
        //@post make a new copy
        //@return none
        bool isEmpty() const;
        //@pre none
        //@post to check whether the list is empty or not
        //@return true if is empty, fasle there is something
        int getLength() const;
        //@pre none
        //@post none
        //@return return length
        void insert(int position, T entry) throw (std::runtime_error);
        //@pre let the user to pick value and position to insert into list
        //@post insert a new node into LinkedList
        //@return none
        void remove(int position) throw (std::runtime_error);
        //@pre let the user pick position to remove node in LinkedList
        //@post remove a element in linkedlist
        //@return none
        void clear();
        //@pre to avoid memonry leaks
        //@post delete all the nodes in linkedlist
        //@return none
        T getEntry(int position) const throw (std::runtime_error);
        //@pre input a position to find that value
        //@post to get the value from the selected position
        //@return to return an int
        void replace(int position, T newEntry) throw (std::runtime_error);
        //@pre let user to pick and postion and replace with new value
        //@post selected position will get a new value
        //@return none

        void printlength(); //extra, not in the instruction
        //@pre none
        //@post print out the length of the list
        //@return none
        void printlist(); // extra. not in the instruction
        //@pre none
        //@post print out the node in the linkedlist
        //@return none
 };
 #include "Linkedlist.cpp"
 #endif
