#include"Pokemon.h"
#include"Excutive.h"
#include"BST.h"
#include"BinaryNode.h"
#include<string>
int main(int argc,char** argv)
{
    std::string filename=" ";
    filename=argv[1];
    Excutive e1(filename);
    e1.run();
    //return(0);
}