/* -----------------------------------------------------------------------------
 * File Name: Node.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab02
 * Description: To define node methods
 * Date:  02/06/2018
 ---------------------------------------------------------------------------- */
template <typename T>
Node<T>::Node(T value)
{
    m_value = value;
    m_next = nullptr;
}

template <typename T>
T Node<T>::getValue()const
{
    return(m_value);
}

template <typename T>
void Node<T>::setValue(T value)
{
    m_value = value;
}

template <typename T>
Node<T>* Node<T>::getNext()const
{
    return(m_next);
}

template <typename T>
void Node<T>::setNext(Node<T>* next)
{
    m_next = next;
}
