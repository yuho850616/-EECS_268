#include "Excutive.h"
#include "Pokemon.h"
#include "BST.h"
#include "BinaryNode.h"
#include "test.h"
#include<string>
#include<iostream>
#include<exception>
#include<fstream>
Excutive::Excutive(std::string filename)
{
    std::ifstream InFile;
    InFile.open(filename);
    std::string strtemp=" ";
    std::string ANtemp=" ";
    std::string INDtemp=" ";
    std::string JNtemp=" ";
    int indx=0;
    Poketree=new BST<Pokemon,std::string>();
    while(!InFile.eof())
    {
        std::getline(InFile,ANtemp,'\t');
        std::getline(InFile,INDtemp,'\t');
        std::getline(InFile,JNtemp);
        indx=std::stoi(INDtemp);
        //std::cout<<ANtemp<<", "<<JNtemp<<","<<INDtemp<<"\n";
        Pokemon temp;
        temp.setAN(ANtemp);
        temp.setIND(indx);
        temp.setJN(JNtemp);
        try
        {
            Poketree->insert(temp);
        }
        catch(std::runtime_error &e)
        {
            std::cout<<e.what();
        }
    }
}
void Excutive::run()
{
    int choice=0;
    int count=0;
    while(choice!=7)
    {
        std::cout<<"Please Make Your Selection:\n";
        std::cout<<"1.Save\n";
        std::cout<<"2.Copy.\n";
        std::cout<<"3.Search.\n";
        std::cout<<"4.Add.\n";
        std::cout<<"5.Remove.\n";
        std::cout<<"6.Test.\n";
        std::cout<<"7.Quit.\n";
        std::cin>>choice;
        if(choice==1)
        {
            int sc=0;
            int treec=0;
            std::cout<<"Which Tree do You Want to Copy:\n1.Original\n2.Copy.\n";
            std::cin>>treec;
            std::ofstream Outfile;
            std::string outname=" ";
            if(treec==1)
            {
                std::cout<<"How Do You Want Your Data Outputed:\n";
                std::cout<<"1.Preorder\n";
                std::cout<<"2.Inorder\n";
                std::cout<<"3.Postorder\n";
                std::cin>>sc;
                std::cout<<"Please Enter The Filename:";
                std::cin>>outname;
                Outfile.open(outname);
                Poketree->save(sc,Outfile);
            }
            else if(treec==2)
            {
                if(count>0)
                {
                    std::cout<<"How Do You Want Your Data Outputed:\n";
                    std::cout<<"1.Preorder\n";
                    std::cout<<"2.Inorder\n";
                    std::cout<<"3.Postorder\n";
                    std::cin>>sc;
                    std::cout<<"Please Enter The Filename:";
                    std::cin>>outname;
                    Outfile.open(outname);
                    Copytree->save(sc,Outfile);
                }
                else
                {
                    std::cout<<"Please Make a Copy First.\n";
                }
            }
        }
        else if(choice==2)
        {
            Copytree=new BST<Pokemon,std::string>(*Poketree);
            count++;
        }
        else if(choice==3)
        {
            //Poketree->getRoot();
            std::string key=" ";
            std::cout<<"Please Input the American Name of Your Pokemon:";
            std::cin>>key;
            try
            {
                Poketree->search(key);
            }
            catch(std::runtime_error &e)
            {
                std::cout<<e.what();
            }
        }
        else if(choice==4)
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
            Pokemon PokeAdd;
            PokeAdd.setAN(AN);
            PokeAdd.setJN(JN);
            PokeAdd.setIND(idx);
            Copytree->insert(PokeAdd);
        }
        else if (choice==5)
        {
            std::string AN=" ";
            std::cout<<"Please Enter the American Name for Pokemon.\n";
            std::cin>>AN;
            Copytree->remove(AN);
        }
        else if(choice==6)
        {
            test testmode;
            std::cout<<"--------------------------------\n";
            std::cout<<"You Are In Test Mode Now.\n";
            std::cout<<"1.TestAdd.\n";
            std::cout<<"2.TestRemove.\n";
            std::cout<<"3.TestWriteToFile.\n";
            std::cout<<"Please Make Your Choice:\n";
            std::cout<<"--------------------------------\n";
            int tc=0;
            std::cin>>tc;
            if(tc==1)
            {
                testmode.testAdds(*Poketree);
            }
            else if(tc==2)
            {
                testmode.testRemoves(*Poketree);
            }
            else if(tc==3)
            {
                testmode.testWriteToFile(*Poketree);
            }
            else
            {
                std::cout<<"PLEASE MAKE CORRECT SELECTION!\n";
            }
        }
        else
        {
            std::cout<<"PLEASE MAKE CORRECT SELECTION!\n";
        }
    }
}