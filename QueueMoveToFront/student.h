#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
      T temp = mData[(mFront+pos)%mCap];
    for(size_t i = pos+1;i > 1;i--){
        //std::cout<< "pos "<<i <<"\n";
        mData[(mFront+i-1)%mCap] = mData[(mFront+i-1-1)%mCap];
    }
    mData[mFront] = temp;
}

#endif
