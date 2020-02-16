#include"test.h"
#include<iostream>
#include<string>
#include<fstream>
#include"Pokemon.h"
#include"BST.h"
void test::testAdds(BST<Pokemon,std::string> bst)
{
    std::string AN=" ";
    std::string JN=" ";
    int idx=0;
    std::cout<<"Please Enter the American Name for Pokemon.\n";
    std::cin>>AN;
    std::cout<<"Please Enter the Japanese Name for Pokemon.\n";
    std::cin>>JN;
    std::cout<<"Please Enter the Index for Pokemon.\n";
    std::cin>>idx;
    Pokemon PokeTest;
    PokeTest.setAN(AN);
    PokeTest.setJN(JN);
    PokeTest.setIND(idx);
    bst.insert(PokeTest);
    bst.saveTest(bst.getRoot());
}
void test::testRemoves(BST<Pokemon, std::string> bst) 
{
    std::string AN=" ";
    std::cout<<"Please Enter the American Name for Pokemon.\n";
    std::cin>>AN;
    bst.remove(AN);
    bst.saveTest(bst.getRoot());
}
void test::testWriteToFile(BST<Pokemon, std::string> bst)
{
    std::string outname=" ";
    std::cout<<"Please Enter The Filename:";
    std::cin>>outname;
    std::ofstream outfile;
    outfile.open(outname);
    bst.save(2,outfile);
    outfile.close();
}