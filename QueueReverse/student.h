#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  int cap = mCap;
  int round = (b-a)/2+1;

  for(int i=0;i<round;i++){
    std::swap(mData[(mFront + (a++))%mCap], mData[(mFront + (b--))%mCap]);

  }
  mCap = cap;

}

#endif
