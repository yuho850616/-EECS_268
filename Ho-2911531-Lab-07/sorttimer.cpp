/* -----------------------------------------------------------------------------
 * File Name: sorttimer.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab07
 * Description: to define timecount method
 * Date: 04/09/2018
 ---------------------------------------------------------------------------- */

template <typename T>
double sorttimer<T>::timecount(std::function<void(T[],int)> Sort, T arr[], int size)
{
  // clock_t t;
  // int f;
  // t = clock();
  // printf ("Calculating...\n");
  // f = frequency_of_primes (99999);
  // printf ("The number of primes lower than 100,000 is: %d\n",f);
  // t = clock() - t;
  // printf ("It took me %d clicks (%f seconds).\n",(int)t,((float)t)/CLOCKS_PER_SEC);
  // return 0;
  clock_t t;
  t =clock();
  t = clock() - t;
  double totaltime = 0.0;
  Sort(arr, size);
  totaltime = (clock() - t)/(double) CLOCKS_PER_SEC ;
  return(totaltime);
}
