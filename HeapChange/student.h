#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <assert.h>

template <typename T,typename Comp>
void CP::priority_queue<T,Comp>::change_value(size_t pos,const T& value) {
  //write your code here
  for(int i=0;i<mSize;i++){
    std::cout << mData[i] << " ";
  }
  mData[pos] = value;
  fixDown(pos);
  fixUp(pos);
}

#endif
