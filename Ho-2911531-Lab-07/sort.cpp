/* -----------------------------------------------------------------------------
 * File Name: sort.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab07
 * Description: to define 5 sorts method
 * Date: 04/09/2018
 ---------------------------------------------------------------------------- */
template<typename T>
void sort<T>::bubbleSort(T arr[], int size)
{
  for(int i=0 ;i<size-1; i++)
  {
    for(int j=0; j<size-1; j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp = arr[j];
        arr[j]=arr[j+1];
        arr[j+1] =temp;
      }
    }
  }
}

template<typename T>
void sort<T>::selectionSort(T arr[], int size)
{
  for(int i=0; i<size-1; i++)
  {
    int min = i;
    for(int j=i+1; j<size; j++)
    {
      if(arr[j]<arr[min])
      {
        min = j;
      }
    }
    T temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}

template <typename T>
void sort<T>::insertionSort(T arr[], int size)
{
  int j;
  for(int i = 1; i < size; i++)
	{
		j = i;

		while(j > 0 && arr[j - 1] > arr[j])
		{
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}
//
template <typename T>
void sort<T>::mergeSort(T arr[], int size)
{
  if(size > 1)
  {
    int mid = (size/2);
    mergeSort(arr, mid); // arr = index[0]
    mergeSort(arr+mid, (size-mid));// index[0+mid]
    merge(arr, arr+mid, mid , size-mid);
  }
//  if(size>1)
//   {
//     int mid = (size/2);
//     int leftsize = mid;
//     int rightsize = (size-mid);
//     T*left = arr; //index[0];
//     T*right = (arr+mid); // not dereference
//     mergeSort(left,leftsize);
//     mergeSort(right,rightsize);
//     merge(left,leftsize,right,rightsize);
//   }
}

template <typename T>
void sort<T>::merge(T* a1, T* a2, int size1, int size2)
{
  int totalsize = (size1+size2);
  T buff [totalsize];
  int currentleft = 0;
  int currentright = 0;
  int totalarray = 0;
  while(currentleft<size1&& currentright<size2)
  {
    if(a1[currentleft]<a2[currentright])
    {
      buff[totalarray++] = a1[currentleft++];
    }
    else
    {
      buff[totalarray++] = a2[currentright++];
    }
  }
  if(currentright<size2) // if left side is finished, fill the rest of the right side
  {
    for(int i=currentright; i<size2; i++)
    {
      buff[totalarray++] = a2[currentright++];
    }
  }
  if(currentleft<size1)
  {
    for(int i=currentleft; i<size1; i++)
    {
     buff[totalarray++] = a1[currentleft++];
    }
  }
  // for(int i=0; i<totalsize; i++)
  // {
  //   arr[i] = buff[i];
  // }
//  int totalsize = (leftsize+rightsize);
//   T*buff = new T [totalsize];
//   int currentleft = 0;
//   int currentright = 0;
//   for (int i=0; i<totalsize; i++)
//   {
//     if(left[currentleft]<right[currentright])
//     {
//       buff[i]= left[currentleft];
//       currentleft++;
//     }
//     if(left[currentleft]<right[currentright])
//     {
//       buff[i]= right[currentright];
//       currentright++;
//     }
//   }
}
//
template <typename T>
void sort<T>::setMedianPivot(T arr[], int first, int last)
{
  int pivotvalue=0 ;
  pivotvalue = ((last+first)/2); //median value as pivot value
	T temp = 0;
	temp = arr[pivotvalue];
	arr[pivotvalue] = arr[last];
	arr[last] = temp;
}
//
template <typename T>
void sort<T>::quickSortWithMedian(T arr[], int size)
{
  quickSortRec(arr, 0, (size-1), true);
}
//
template<typename T>
void sort<T>::quickSort(T arr[], int size)
{
  quickSortRec(arr, 0, (size-1), false);
}
//
template<typename T>
void sort<T>::quickSortRec(T arr[], int first, int last, bool median)
{
  if(first<last)
  {
    int pivot;
    pivot =partition(arr, first, last, median);
    quickSortRec(arr, pivot+1, last, median);
    quickSortRec(arr, first, pivot-1, median);
  }
}

template <typename T>
int sort<T>::partition(T arr[], int first, int last, bool median)
{
	if(median==true)
  {
		setMedianPivot(arr, first, last);
	}
  int left = first;
  for(int i=left; i<last;i++)
  {
    if(arr[i]<arr[last])
    {
      T temp = arr[i];
      arr[i]= arr[left];
      arr[left] = temp;
      left++;
    }
  }
  T temp2 = arr[last];
  arr[last] = arr[left];
  arr[left]= temp2;
  return(left);
}
//
//
template<typename T>
bool sort<T>::isSorted(T arr[], int size)
{
  bool flag = true;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            flag = false;
        }
    }

    return (flag);
}
