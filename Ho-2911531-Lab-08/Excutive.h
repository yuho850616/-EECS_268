#ifndef EXCUTIVE_H
#define EXCUTIVE_H
#include<string>
#include"BST.h"
#include"Pokemon.h"
#include"BinaryNode.h"
class Excutive
{
    public:
    Excutive(std::string filename);
    void run();
    private:
    BST<Pokemon,std::string>* Poketree;
    BST<Pokemon,std::string>* Copytree;
};
#endif