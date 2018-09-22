#include <iostream>
#include <vector.h>
#include <gheap_advanced.h>

int main()
{
  fsu::Vector<int> testList;

  testList.PushBack(3);
  testList.PushBack(2);
  testList.PushBack(7);
  testList.PushBack(9);
  testList.PushBack(5);

  fsu::Vector<int>::Iterator beg = testList.Begin();
  fsu::Vector<int>::Iterator end = testList.End();

  std::cout << "Before Heap Sort:\n";
  std::cout << testList << "\n";

  alt::g_heap_sort(beg,end);

  std::cout << "After Heap Sort:\n";
  std::cout << testList;
  return 0;
}