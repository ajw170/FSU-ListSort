/*
    lsort.cpp
    08/03/18
    Chris Lacher

    sort from standard input to standard output

    Copyright 2018, R.C. Lacher
*/

#include <iostream>
#include <list.h>
#include <compare_spy.h>

// typedef unsigned long ElementType;
#include <xstring.cpp>
#include <fstream>
typedef int ElementType;

int main()
{
  
  std::ifstream inFile("simpleInt.txt",std::ios::in);
  if (!inFile)
    exit(1);
  
  fsu::LessThanSpy<int> lt;
  
  fsu::List < ElementType > L;  // a list
  ElementType e;
  while (inFile >> e)
  {
    L.PushBack(e);
  }
  L.Sort(lt);
  for (typename fsu::List < ElementType > ::Iterator i = L.Begin(); i != L.End(); ++i)
  {
    std::cout << *i << '\n';
  }
  return 0;
}
