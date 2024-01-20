#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  for(int i=a;i<b;i++){
    std::swap(mData[(mFront + a++)%mCap], mData[(mFront + b--)%mCap]);
  }

}

#endif
