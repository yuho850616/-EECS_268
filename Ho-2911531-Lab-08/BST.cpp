#include<iostream>
#include<stdexcept>
#include<fstream>
#include<string>
#include"BST.h"
template<typename itemtype,typename searchtype>
BST<itemtype,searchtype>::BST()
{
    m_root=nullptr;
}
template<typename itemtype,typename searchtype>
BinaryNode<itemtype>* BST<itemtype,searchtype>::getRoot()
{
    return(m_root);
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>::search(searchtype key)
{
    try
    {
        //std::cout<<key<<"\n";
        BinaryNode<itemtype>* temp=recsearch(m_root,key);
        //std::cout<<"1\n";
        std::cout<<"I Found Your Pokemon: American Name:"<<key<<", Japanese Name:"<<temp->getEntry().getJN()<<", Index:"<<temp->getEntry().getInd()<<"\n";
    }
    catch(std::runtime_error &e)
    {
        std::cout<<e.what();
    }
}
template<typename itemtype,typename searchtype>
BinaryNode<itemtype>* BST<itemtype,searchtype>::recsearch(BinaryNode<itemtype>* subtree,searchtype key) throw (std::runtime_error)
{
    if(subtree==nullptr)
    {
        throw(std::runtime_error("Cannot Find this Pokemon.\n"));
    }
    else
    {
        if(subtree->getEntry().getAN()==key)
        {
            return(subtree);
        }
        else
        {
            if(subtree->getEntry().getAN()>key)
            {
                return(recsearch(subtree->getLeft(),key));
            }
            
            else// else if(subtree->getEntry().getAN()<key)
            {
                return(recsearch(subtree->getRight(),key));
            }
        }
    }
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>::insert(itemtype poke) throw (std::runtime_error)
{
    try
    {
        recinsert(poke,m_root);
    }
    catch(std::runtime_error &e)
    {
        std::cout<<e.what();
    }
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>::recinsert(itemtype item,BinaryNode<itemtype>* subtree) throw(std::runtime_error)
{
    if(subtree==nullptr)
    {
        m_root= new BinaryNode<itemtype>(item);
    }
    else
    {
        //
        if(item<subtree->getEntry()&&subtree->getLeft()==nullptr)
        {
            BinaryNode<itemtype>* temp=new BinaryNode<itemtype>(item);
            subtree->setLeft(temp);
            //recinsert(item,subtree->getLeft());
        }
        else if(item>subtree->getEntry()&&subtree->getRight()==nullptr)
        {
            BinaryNode<itemtype>* temp=new BinaryNode<itemtype>(item);
            subtree->setRight(temp);
            //recinsert(item,subtree->getRight());
        }
        else 
        {
            if(item<subtree->getEntry())
            {
                recinsert(item,subtree->getLeft());
            }
            else if(item>subtree->getEntry())
            {
                recinsert(item,subtree->getRight());
            }
            else
            {
                throw(std::runtime_error("Sorry, Your Pokemon cannot be added."));
            }
        }
    }
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>::
        (BinaryNode<itemtype>* poke,std::ofstream &Outfile)
{
    Outfile<<poke->getEntry().getAN()<<"\t"<<poke->getEntry().getInd()<<"\t"<<
    poke->getEntry().getJN()<<"\n";
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>::VisitTest(BinaryNode<itemtype>* poke)
{
    std::cout<<poke->getEntry().getAN()<<"\t"<<poke->getEntry().getInd()<<"\t"<<
    poke->getEntry().getJN()<<"\n";
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>:: save(int sc, std::ofstream &Outfile)
{
    if(sc==1)
    {
        try
        {
            savepreorder(m_root,Outfile);
        }
        catch(std::runtime_error &e)
        {
            std::cout<<e.what();
        }
    }
    else if(sc==2)
    {
        try
        {
            saveinorder(m_root,Outfile);
        }
        catch(std::runtime_error &e)
        {
            std::cout<<e.what();
        }
    }
    else
    {
        try
        {
            savepostorder(m_root,Outfile);
        }
        catch(std::runtime_error &e)
        {
            std::cout<<e.what();
        }
    }
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>::saveTest(BinaryNode<itemtype>* subtree)
{
    if(subtree!=nullptr)
    {
        saveTest(subtree->getLeft());
        VisitTest(subtree);
        saveTest(subtree->getRight());        
    }
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>::saveinorder(BinaryNode<itemtype>* subtree,std::ofstream &Outfile) throw (std::runtime_error)
{
    if(subtree!=nullptr)
    {
        saveinorder(subtree->getLeft(),Outfile);
        Visit(subtree,Outfile);
        saveinorder(subtree->getRight(),Outfile);        
    }
    // else
    // {
    //     throw(std::runtime_error("Sorry, the Tree Is Empty."));
    // }
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>:: savepreorder(BinaryNode<itemtype>* subtree,std::ofstream &Outfile) throw (std::runtime_error)
{
    if(subtree!=nullptr)
    {
        Visit(subtree,Outfile);
        savepreorder(subtree->getLeft(),Outfile);
        savepreorder(subtree->getRight(),Outfile);
    }
    // else
    // {
    //     throw(std::runtime_error("Sorry, the Tree Is Empty."));
    // }
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>:: savepostorder(BinaryNode<itemtype>* subtree,std::ofstream &Outfile) throw (std::runtime_error)
{
    if(subtree!=nullptr)
    {
        savepostorder(subtree->getLeft(),Outfile);
        savepostorder(subtree->getRight(),Outfile);
        Visit(subtree,Outfile);
    }
    // else
    // {
    //     throw(std::runtime_error("Sorry, the Tree Is Empty."));
    // }

}
template<typename itemtype,typename searchtype>
BST<itemtype,searchtype>::BST(const BST<itemtype,searchtype> &original)
{
    itemtype temp=original.m_root->getEntry();
    BinaryNode<itemtype>* tempNode=new BinaryNode<itemtype>(temp);
    m_root=tempNode;
    copy(m_root,original.m_root);
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>::copy(BinaryNode<itemtype>* subtree,BinaryNode<itemtype>* original)
{
    if(original->getLeft()!=nullptr)
    {
        itemtype temp=original->getLeft()->getEntry();
        BinaryNode<itemtype>* tempNode=new BinaryNode<itemtype>(temp);
        subtree->setLeft(tempNode);
        copy(subtree->getLeft(),original->getLeft());
        // std::cout<<"Left.\n";
        // std::cout<<tempNode->getEntry().getInd()<<"\n";
    }
    if(original->getRight()!=nullptr)
    {
        itemtype temp=original->getRight()->getEntry();
        BinaryNode<itemtype>* tempNode=new BinaryNode<itemtype>(temp);
        subtree->setRight(tempNode);
        // std::cout<<"Right.\n";
        // std::cout<<tempNode->getEntry().getInd()<<"\n";
        copy(subtree->getRight(),original->getRight());
    }
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>::remove(searchtype key)
{
    if(m_root==nullptr)
    {
        //std::cout<<"1\n";
        std::cout<<"This tree is emptry.\n";
    }
    else if(m_root->getEntry().getAN()==key)
    {
        //std::cout<<"2\n";
        doremove(m_root,nullptr,false);
    }
    else
    {
        if(key>m_root->getEntry().getAN())
        {
            //std::cout<<"3\n";
            recremove(m_root->getRight(),m_root,key,false);
        }
        else
        {
            //std::cout<<"4\n";
            recremove(m_root->getLeft(),m_root,key,true);
        }
    }
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>::recremove(BinaryNode<itemtype>* subtree,BinaryNode<itemtype>* parent,searchtype key,bool LR)
{
    if(subtree==nullptr)
    {
        std::cout<<"Cannot find this pokemon.\n";
    }
    else if(subtree->getEntry().getAN()==key)
    {
        //std::cout << "3" <<std::endl;
        doremove(subtree,parent,LR);
    }
    else
    {
        if(key>subtree->getEntry().getAN())
        {
            recremove(subtree->getRight(),subtree,key,false);
        }
        else
        {
            recremove(subtree->getLeft(),subtree,key,true);
        }
    }
}
template<typename itemtype,typename searchtype>
void BST<itemtype,searchtype>::doremove(BinaryNode<itemtype>* subtree,BinaryNode<itemtype>* parent,bool LR)
{
    if(subtree->getLeft()==nullptr&&subtree->getRight()==nullptr)
    {
        if(LR==true)
        {
            parent->setLeft(nullptr);
        }
        else
        {
            parent->setRight(nullptr);
        }
        delete subtree;
    }
    else
    {
        if(subtree->getLeft()!=nullptr&&subtree->getRight()==nullptr)
        {
            //std::cout << "5" <<std::endl;
           if(LR==true)
           {
               parent->setLeft(subtree->getLeft());
           }
           else
           {
               parent->setRight(subtree->getLeft());
           }
           delete subtree;
        }
        else if(subtree->getRight()!=nullptr&&subtree->getLeft()==nullptr)
        {   
            //std::cout << "6" <<std::endl;
           if(LR==true)
           {
               parent->setLeft(subtree->getLeft());
           }
           else
           {
               parent->setRight(subtree->getLeft());
           }
           delete subtree;
        }
        else
        {
            //std::cout << "7" <<std::endl;
            BinaryNode<itemtype>* maxchild=subtree->getLeft();
            BinaryNode<itemtype>* parenttemp=subtree;
            while(maxchild->getRight()!=nullptr)
            {
                parenttemp=maxchild;
                maxchild=maxchild->getRight();
            }
            //std::cout << "71" <<std::endl;
            itemtype temp=maxchild->getEntry();
            subtree->setEntry(temp);
            //std::cout << "72" <<std::endl;
            if(maxchild->getLeft()!=nullptr)
            {
                BinaryNode<itemtype>* temp=maxchild->getLeft();
                delete maxchild;
                parenttemp->setLeft(temp);
            }
        }
    }
}


