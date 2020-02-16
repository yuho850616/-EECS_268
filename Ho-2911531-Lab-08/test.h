#ifndef TEST_H
#define TEST_H
#include"test.h"
#include<iostream>
#include<string>
#include<fstream>
#include"Pokemon.h"
#include"BST.h"
class test 
{
    public:
    void testAdds(BST<Pokemon,std::string> bst);
    void testRemoves(BST<Pokemon,std::string> bst);
    void testWriteToFile(BST<Pokemon,std::string> bst);
};
#endif