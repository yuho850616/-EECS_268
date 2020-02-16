/* -----------------------------------------------------------------------------
 * File Name: sort.h
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab07
 * Description: to declare 5 sorts method
 * Date: 04/09/2018
 ---------------------------------------------------------------------------- */
#ifndef SORT_H
#define SORT_H


template <typename T>
class sort
{
public:
  //@pre pass in the array with size
  //@post for the adjacent two index, if left is bigger than right one, swap.
  //@return none
  static void bubbleSort(T arr[], int size);
  //@pre pass in the array with size
  //@post for each time, select the smalled value put them in bon in order.
  //@return none
  static void selectionSort(T arr[], int size);
  //@pre pass in the array with size
  //@post separate the array to sorted and unsorted
  //@return none
  static void insertionSort(T arr[], int size);
  //@pre pass in the array with size
  //@post kepp divided array by 2 and when they merge make it sorted
  //@return none
  static void mergeSort(T arr[], int size);
  //@pre pass in the array with size
  //@post choose the last value as pivot value and if the number are bigger swap with the second last value.
  //Until the array left side is smaller than pivot and right side is bigger than pivot, swap them.
  //@return none
  static void quickSort(T arr[], int size);
  //@pre pass in the array with size
  //@post choose the middle value as median
  //@return none
  static void quickSortWithMedian(T arr[], int size);
  //@pre none
  //@post to check is array is sorted or not
  //@return if the array is sorted return true else return false.
  static bool isSorted(T arr[], int size);

private:
  static void merge(T* a1, T* a2, int size1, int size2); // for merge sort to merge arrays
  static void quickSortRec(T arr[], int first, int last, bool median); // sorts the array by partitioning the array,
  static void setMedianPivot(T arr[], int first, int last); //for quick sort, puts the median value of the array in the last position
  static int partition(T arr[], int first, int last, bool median); //for quick sort, partitions the array
};
#include "sort.cpp"
#endif
