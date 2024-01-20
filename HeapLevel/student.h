#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include <math.h>

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything

  std::vector<T> r;
  int n = pow(2, k+1)-2;
  int i = pow(2, k);
  while(i--){
    if(n<mSize)
        r.push_back(mData[n]);
    n--;

  }



  return r;

}

// 10 2 0 1 2 3 4 5 6 7 8 9

#endif

