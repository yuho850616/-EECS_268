#ifndef BINARY_NODE_H
#define BINARY_NODE_H
template<typename T>
class BinaryNode 
{
    public:
    BinaryNode(T Entry);
    ~BinaryNode();
    void setLeft(BinaryNode<T>* Target);
    void setRight(BinaryNode<T>* Target);
    void setEntry(T Entry);
    T getEntry();
    BinaryNode<T>* getRight();
    BinaryNode<T>* getLeft();
    
    private:
    BinaryNode<T>* LeftChild;
    BinaryNode<T>* RightChild;
    T m_Entry;
};
#include"BinaryNode.cpp"
#endif
