/* -----------------------------------------------------------------------------
 * File Name: heap.cpp
 * Author:  Tsung Yu Ho
 * Assignment:  [EECS_268] Lab09
 * Description: to define the heap method
 * Date:  04/30/2018
 ---------------------------------------------------------------------------- */
 template<typename T>
 heap<T>::heap()
 {
   m_size = 1;
   numnodes = 0;
   m_arr = new T[m_size];
 }

 template<typename T>
 bool heap<T>::isEmpty()const
 {
   if(numnodes==0)
   {
     return(true);
   }
   else
   {
     return(false);
   }
 }

 template<typename T>
 T heap<T>::peekTop()const throw(std::runtime_error)
 {
   if(isEmpty()==false)
   {
     return(m_arr[0]);
   }
   else
   {
     throw(std::runtime_error("It is empty!\n"));
   }
 }

template<typename T>
void heap<T>::remove()throw(std::runtime_error)
{
  if(isEmpty()==true)
  {
    throw("heap is empty\n");
  }
  std::swap(m_arr[0],m_arr[numnodes-1]);
  numnodes--;
  downheap(0);
}

template<typename T>
int heap<T>::getNumberOfNodes() const
{
  return(numnodes);
}

template<typename T>
heap<T>::~heap()
{
  delete []m_arr;
}

template<typename T>
void heap<T>::add(T data)
{
  if(m_size==numnodes)
  {
    resize();
  }
  m_arr[numnodes]=data;
  upheap(numnodes);
  numnodes++;
}

template<typename T>
void heap<T>::resize()
{
  T* temp=new T[m_size*2];
  for(int i=0; i<m_size; i++)
  {
    temp[i]=m_arr[i];
  }
  m_size = m_size*2;
  delete []m_arr;
  m_arr = temp;
}

template<typename T>
void heap<T>::upheap(int index)
{
  if(index>0)
  {
    if(m_arr[index]>m_arr[(index-1)/2])
    {
      std::swap(m_arr[index],m_arr[(index-1)/2]);
      upheap((index-1)/2);
    }
  }
}

template<typename T>
void heap<T>::downheap(int index)
{
  if((2*index)+2<numnodes)
  {
    if(m_arr[2*index+1]<m_arr[2*index+2])
    {
      if(m_arr[2*index+2]>m_arr[index])
      {
        std::swap(m_arr[2*index+2],m_arr[index]);
        downheap((2*index)+2);
      }
    }
    else
    {
      if(m_arr[2*index+1]>m_arr[index])
        {
          std::swap(m_arr[2*index+1],m_arr[index]);
          downheap((2*index)+1);
        }
    }
  }
  else if((2*index)+1<numnodes)
  {
      if(m_arr[2*index+1]>m_arr[index])
      {
        T object;
        object =m_arr[2*index+1];
        m_arr[2*index+1]=m_arr[index];
        m_arr[index]=object;
        std::cout<<m_arr[index].getfirstname()<<"\n";
      }
  }
}
