#include<iostream>
#include"boardgame.h"
#include"boarddriver.h"
#include<string>
#include<fstream>



int main(int argc, char* argv[])
{
  std::string fileName;
  fileName=argv[1];
  std::ifstream read;
  read.open(fileName);


  if(read.is_open()&& argc>1)
  {
    boarddriver board(fileName);
    board.run();
  }
  else
  {
    std::cout << "Incorrect number of parameeters or wrong text name\n";
  }

  return(0);
}
