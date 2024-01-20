#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
  // your code here
  std::vector<int> v(k);
  int run=0;
  for(int i=0;i<mSize;i++){
    v[run]++;
    run++;
    if(run==k)run=0;
  }
  run=0;
  for(int i=0;i<k;i++){
        std::queue<T> tmp;
    while(v[i]--){
        tmp.push(mData[(mFront + run++)%mCap]);
    }
  output.push_back(tmp);
  }

}

#endif
