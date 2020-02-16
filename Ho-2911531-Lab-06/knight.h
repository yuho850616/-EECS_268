/* -----------------------------------------------------------------------------
 * File Name: knight.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab06
 * Description: to declare the knight tour function
 * Date: 03/27/2018
 ---------------------------------------------------------------------------- */
#ifndef KNIGHT_H
#define KNIGHT_H
#include <fstream>

class knight
{
  public:
    //@pre none
    //@post let function access the private members
    //@return none
    knight(int row, int col);
    //@pre none
    //@post to check is next knight steps is available or not(totally 8 directions)
    //@return none
    void eightdirections(int i,int j);
    //@pre none
    //@post backtracking to know how many steps go through the knight tour
    //@return none
    void knightmove(int posx, int posy);
    //@pre none
    //@post to determine is next step available or not
    //@return true to go
    bool stop(int posx, int posy);
    //@pre none
    //@post to go check from (0,0) (0,1) to (row-1)(col-1) is there solution
    //@return none
    void knightcheck();
    //@pre none
    //@post to print out the 2D array
    //@return none
    void print();
    //@pre none
    //@post to return how many time it costs
    //@return int-> the time it costs
    int frequency_of_primes (int n);

  private:
    std::ofstream out; // to output file(need to put in private to let other function to access)
    int rows; // size of the rows for the 2d array
    int cols; // size of columns for the 2d array
    int board[100][100]; //use stack to give the range
    int nums; //2d array start from (0,0) (0,1) (0,2).....
    int steps; // how many times it goes through 2d array
    bool pause; // to outfile solution to file or print no solution in terminal
    std::string fileName; // string filename
};
#endif
