/* -----------------------------------------------------------------------------
 * File Name: sorttimer.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab07
 * Description: to declare timecount method
 * Date: 04/09/2018
 ---------------------------------------------------------------------------- */

#ifndef SORT_TIMER_H
#define SORT_TIMER_H
#include <functional>
template <typename T>

class sorttimer
{

public:
static double timecount(std::function<void(T[],int)> Sort, T arr[], int size);

private:

};
#include "sorttimer.cpp"
#endif
