/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab07
 * Description: to read the commnad line
 * Date: 04/09/2018
 ---------------------------------------------------------------------------- */
 #include <iostream>
 #include <fstream>
 #include "sort.h"
 #include "sorttimer.h"
 #include <string>
 #include <stdlib.h>
 #include <math.h>
 #include <stdio.h>
 #include <functional>
 #include <cassert>
 #include <time.h>
 #include <ctime>
int main(int argc, char* argv[])
{

  if(argc==6)
  {
    std::string method = argv[1]; // sortmethod
    std::string lowerbound = argv[2]; // lower bound
    std::string upperbound = argv[3]; // upper bound
    std::string jump = argv[4]; // what value jump each time
    std::string filename = argv[5]; // file name to output
    int low = stoi(lowerbound); //string to int
    int up = stoi(upperbound);
    int pass = stoi(jump);
    int size = ((up-low)/pass)+1; //for example: 100 to 1000 jump 50 (1000-100)/50= 18 18+1=19
    int* arr = new int [up];
    srand(time(NULL));
    for(int i=0; i<up; i++)
    {
      arr[i]=(rand()%(up-low)+low);
    }
    std::ofstream outfile;
    outfile.open(filename);
    if(method == "bubblesort"||method == "bubble")
    {
      outfile<<"bubblesort"<<"\n";
      for(int i=0; i<size; i++)
      {
        outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::bubbleSort, arr, low)<<"\n";
        low = (low+pass);
      }
      std::cout<<filename<<" created!\n";
    }
   if(method == "selectionsort"||method=="selection")
   {
     outfile<<"selectionsort"<<"\n";
     for(int i=0; i<size; i++)
     {
       outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::selectionSort, arr, low)<<"\n";
       low = (low+pass);
     }
     std::cout<<filename<<" created!\n";
   }
   if(method == "insertionsort"||method =="insertion")
   {
     outfile<<"insertionsort"<<"\n";
     for(int i=0; i<size; i++)
     {
       outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::insertionSort, arr, low)<<"\n";
       low = (low+pass);
     }
     std::cout<<filename<<" created!\n";
   }
   if(method == "mergesort"||method=="merge")
   {
     outfile<<"mergeSort"<<"\n";
     for(int i=0; i<size; i++)
     {
       outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::mergeSort, arr, low)<<"\n";
       low = (low+pass);
     }
      std::cout<<filename<<" created!\n";
   }
   if(method == "quicksort"|| method=="quick")
   {
     outfile<<"quickSort"<<"\n";
     for(int i=0; i<size; i++)
     {
       outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::quickSort, arr, low)<<"\n";
       low = (low+pass);
     }
      std::cout<<filename<<" created!\n";
   }
   if(method == "quicksortwithmedian"||method=="quickwithmedian")
   {
     outfile<<"quickSortWithMedian"<<"\n";
     for(int i=0; i<size; i++)
     {
       outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::quickSortWithMedian, arr, low)<<"\n";
       low = (low+pass);
     }
      std::cout<<filename<<" created!\n";
   }
   if(pass<0)
   {
     std::cout<<"Jump needs to be bigger than zero\n";
   }

 }
 else if(argc==7)
 {
   std::string method = argv[1]; // sortmethod
   std::string lowerbound = argv[2]; // lower bound
   std::string upperbound = argv[3]; // upper bound
   std::string jump = argv[4]; // what value jump each time
   std::string filename = argv[5]; // file name to output
   std::string asserted = argv[6];
   int low = stoi(lowerbound); //string to int
   int up = stoi(upperbound);
   int pass = stoi(jump);
   int size = ((up-low)/pass)+1; //for example: 100 to 1000 jump 50 (1000-100)/50= 18 18+1=19
   int* arr = new int [up];
   srand(time(NULL));
   for(int i=0; i<up; i++)
   {
     arr[i]=(rand()%(up-low)+low);
   }
   std::ofstream outfile;
   outfile.open(filename);
   if(method == "bubblesort"||method == "bubble")
   {
     outfile<<"bubblesort"<<"\n";
     for(int i=0; i<size; i++)
     {
       outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::bubbleSort, arr, low)<<"\n";
       if(asserted=="assert")
       {
         assert(sort<int>::isSorted(arr,low));
       }
       low = (low+pass);
     }
     std::cout<<filename<<" created!\n";
   }
  if(method == "selectionsort"||method=="selection")
  {
    outfile<<"selectionsort"<<"\n";
    for(int i=0; i<size; i++)
    {
      outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::selectionSort, arr, low)<<"\n";
      if(asserted=="assert")
      {
        assert(sort<int>::isSorted(arr,low));
      }
      low = (low+pass);
    }
    std::cout<<filename<<" created!\n";
  }
  if(method == "insertionsort"||method =="insertion")
  {
    outfile<<"insertionsort"<<"\n";
    for(int i=0; i<size; i++)
    {
      outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::insertionSort, arr, low)<<"\n";
      if(asserted=="assert")
      {
        assert(sort<int>::isSorted(arr,low));
      }
      low = (low+pass);
    }
    std::cout<<filename<<" created!\n";
  }
  if(method == "mergesort"||method=="merge")
  {
    outfile<<"mergeSort"<<"\n";
    for(int i=0; i<size; i++)
    {
      outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::mergeSort, arr, low)<<"\n";
      if(asserted=="assert")
      {
        assert(sort<int>::isSorted(arr,low));
      }
      low = (low+pass);
    }
     std::cout<<filename<<" created!\n";
  }
  if(method == "quicksort"|| method=="quick")
  {
    outfile<<"quickSort"<<"\n";
    for(int i=0; i<size; i++)
    {
      outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::quickSort, arr, low)<<"\n";
      if(asserted=="assert")
      {
        assert(sort<int>::isSorted(arr,low));
      }
      low = (low+pass);
    }
     std::cout<<filename<<" created!\n";
  }
  if(method == "quicksortwithmedian"||method=="quickwithmedian")
  {
    outfile<<"quickSortWithMedian"<<"\n";
    for(int i=0; i<size; i++)
    {
      outfile<<low<<"\t"<<sorttimer<int>::timecount(sort<int>::quickSortWithMedian, arr, low)<<"\n";
      if(asserted=="assert")
      {
        assert(sort<int>::isSorted(arr,low));
      }
      low = (low+pass);
    }
     std::cout<<filename<<" created!\n";
  }
  if(pass<0)
  {
    std::cout<<"Jump needs to be bigger than zero\n";
  }
}
 else
  {
    std::cout << "Incorrect number of parameeters, please enter six parameters\n";
  }
  return(0);

}
