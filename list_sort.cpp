/*
 *  list_sort.cpp
    Andrew J Wood - COP4531 - Algorithms
    9/26/2018

    Implementation of List<T>::Sort() using the bottom up merge sort algorithm.  Note that the
    runtime is O (n log n) while the space overhead is O(1) since this is specifically designed
    for linked lists.

    Note that the code is self-documenting.
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

