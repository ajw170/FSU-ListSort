/*
    list_insertion_sort.cpp
    05/17/17
    Chris Lacher

    Implementation of List<T>::Sort() using the
    insertion sort algorithm

    Copyright 2017, R. C. Lacher
*/

//----------------------------------
//     List<T>::Sort Implementations
//----------------------------------

template < typename T >
template < class P >
void List<T>::Sort (P& comp)
// insertion sort: in place, stable, Theta(n*n)
{
  Iterator i, j, k;
  T t;
  for (i = Begin(); i != End(); ++i)
  {
    t = *i;
    for (k = i, j = k--; j != Begin() && comp(t,*k); --j, --k)
      *j = *k;
    *j = t;
  }
}

template < typename T >
void List<T>::Sort ()
{
  fsu::LessThan<T> p;
  Sort(p);
}

