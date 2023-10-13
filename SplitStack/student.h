#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  std::vector<std::vector<T>> t(k);

  for(int i=0;i<mSize;i++){
    int num = abs(i - mSize +1)%k;
    t[num].push_back(mData[i]);

  }
  //should return something
  return t;
}

#endif

