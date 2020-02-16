/* -----------------------------------------------------------------------------
 * File Name: knight.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab06
 * Description: to define the knight tour function
 * Date: 03/27/2018
 ---------------------------------------------------------------------------- */
#include"knight.h"
#include<iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <math.h>

knight::knight(int row, int col)
{
  fileName = "tour.txt";
  out.open(fileName);
  nums=1;
  rows=row;
  cols=col;
  steps=0;
  for(int i=0; i<rows; i++)
  {
    for(int j=0; j<cols; j++)
    {
      board[i][j]=0;
    }
  }
}

void knight::eightdirections(int i, int j)
{
  if(i-2>=0)
  {
    if(j+1<cols)
    {
      if(stop(i-2,j+1))
      {
        knightmove(i-2,j+1);
      }
    }
    if(j-1>=0)
    {
      if(stop(i-2,j-1))
      {
        knightmove(i-2,j-1);
      }
    }
  }
  if(j+2 <cols)
  {
    if(i+1 < rows)
    {
      if(stop(i+1,j+2))
      {
        knightmove(i+1,j+2);
      }
    }
    if(i-1>=0)
    {
      if(stop(i-1,j+2))
      {
        knightmove(i-1,j+2);
      }
    }
  }
  if(i+2< rows)
  {
    if(j+1 <cols)
    {
      if(stop(i+2, j+1))
      {
        knightmove(i+2,j+1);
      }
    }
    if(j-1>=0)
    {
      if(stop(i+2,j-1))
      {
        knightmove(i+2,j-1);
      }
    }
  }
  if(j-2>=0)
  {
    if(i+1< rows)
    {
      if(stop(i+1,j-2))
      {
        knightmove(i+1,j-2);
      }
    }
    if(i-1>=0)
    {
      if(stop(i-1,j-2))
      {
        knightmove(i-1,j-2);
      }
    }
  }
}
bool knight::stop(int posx, int posy)
{
  if(board[posx][posy]==0)
  {
    return (true);
  }
  else

  {
    return (false);
  }
}

void knight::knightcheck()
{
  for(int i=0; i<rows; i++)
  {
    for(int j=0; j<cols ; j++)
    {
      nums=1;
      board[i][j]=nums;
      nums++;
      eightdirections(i,j);
      out<<"\n";
      board[i][j]=0;
      if(pause==true)
      {
            std::cout<<"Touring from "<<i<<","<<j<<"...\n";
            std::cout<<"No soultion found\n";
      }
      else
      {
        std::cout<<"Touring from "<<i<<","<<j<<"...\n";
        std::cout<<"Solution found and written to "<<fileName<<"\n";
        pause = true;
      }
    }
  }
}

void knight::knightmove(int posx, int posy)
{
  board[posx][posy]=nums;
  if(nums==(rows*cols))
  {
    pause = false;
    print();
    steps++;
    board[posx][posy]=0;
    nums--; //backtracking
  }
  else
  {
    nums++;
    eightdirections(posx,posy);
    board[posx][posy]=0;
    nums--;// backtracking
  }
}
void knight::print()
{
     clock_t t;
     int f;
     t = clock();
     out<<"Calculating...\n";
     f = frequency_of_primes(99999);
     out<<"The number of primes lower than 100,000 is: "<<f<<"\n";
     t = clock() - t;
     out<<"It took me "<<t<<" clicks ("<<static_cast<float>(t)/CLOCKS_PER_SEC<<" seconds).\n";
     out<<"Solution: \n";
     for(int i=0; i<rows; i++)
     {
       for(int j=0; j<cols; j++)
       {
         out<<board[i][j]<<' ';
       }
       out<<"\n";
     }
}

int knight::frequency_of_primes (int n)
{
    int i,j;
    int freq=n-1;
    for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
    return freq;
}
