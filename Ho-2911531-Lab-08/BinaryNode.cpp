
template<typename T>
BinaryNode<T>::BinaryNode(T Entry)
{
    m_Entry=Entry;
    LeftChild=nullptr;
    RightChild=nullptr;
}
template<typename T>
BinaryNode<T>::~BinaryNode()
{
    
}
template<typename T>
void BinaryNode<T>::setEntry(T Entry)
{
    m_Entry=Entry;
}
template<typename T>
void BinaryNode<T>::setLeft(BinaryNode<T>* target)
{
    LeftChild=target;
}
template<typename T>
void BinaryNode<T>::setRight(BinaryNode<T>* target)
{
    RightChild=target;
}
template<typename T>
BinaryNode<T>* BinaryNode<T>::getLeft()
{
    return(LeftChild);
}
template<typename T>
BinaryNode<T>* BinaryNode<T>::getRight()
{
    return(RightChild);
}
template<typename T>
T BinaryNode<T>::getEntry()
{
    return(m_Entry);    
}