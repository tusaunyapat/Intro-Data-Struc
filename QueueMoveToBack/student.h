#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  mData[mSize] = mData[pos];
  for(int i=pos;i<mSize;i++){
    std::swap(mData[(i+mFront)%mCap], mData[(i+1+mFront)%mCap]);
  }
}

#endif
