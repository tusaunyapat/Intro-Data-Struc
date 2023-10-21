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
  int n=0;
  int m = pow(2, k);
  while(k>0){
    n += pow(2, k);
    k--;
  }
  CP::priority_queue<T,Comp> pq;


  while(m--){
    if(n<mSize)pq.push(mData[n]);
    n--;
  }

  while(!pq.empty()){
    r.push_back(pq.top());
    pq.pop();
  }


  return r;
}

// 10 20 0 1 2 3 4 5 6 7 8 9

#endif

