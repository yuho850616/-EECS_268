#include"BinaryNode.h"
#ifndef BST_H
#define BST_H
#include<string>
#include<fstream>
template<typename itemtype,typename searchtype>
class BST 
{
    public:
    BST();
    BST(const BST<itemtype,searchtype> &original);
    void insert(itemtype poke) throw (std::runtime_error);
    void search(searchtype key);
    void save(int c,std::ofstream &Outfile);
    BinaryNode<itemtype>* getRoot();
    void remove(searchtype key);
    void saveinorder(BinaryNode<itemtype>* subtree,std::ofstream &Outfile) throw (std::runtime_error);
    void savepreorder(BinaryNode<itemtype>* subtree,std::ofstream &Outfile) throw (std::runtime_error);
    void savepostorder(BinaryNode<itemtype>* subtree,std::ofstream &Outfile) throw (std::runtime_error);
    void Visit(BinaryNode<itemtype>* poke,std::ofstream &Outfile);
    void VisitTest(BinaryNode<itemtype>* poke);
    void saveTest(BinaryNode<itemtype>* subtree);
    void copy(BinaryNode<itemtype>* subtree,BinaryNode<itemtype>* original);
    void doremove(BinaryNode<itemtype>* subtree,BinaryNode<itemtype>* parent,bool LR);
    private:
    //std::ofstream OutFile;
    BinaryNode<itemtype>* m_root;
    BinaryNode<itemtype>* recsearch(BinaryNode<itemtype>* root,searchtype key) throw(std::runtime_error);
    void recinsert(itemtype item,BinaryNode<itemtype>* subtree) throw(std::runtime_error);
    void recremove(BinaryNode<itemtype>* subtree,BinaryNode<itemtype>* parent,searchtype key,bool LR);
    

};
#include"BST.cpp"
#endif