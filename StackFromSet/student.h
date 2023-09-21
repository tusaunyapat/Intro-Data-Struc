#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
    auto it = first;
    int s = 0;
    while(it!=last){
        it++;
        s++;
    }
    mData = new T[s]();
    mCap = s;
    mSize = s;
    s-=1;
    it = first;
    while(it!=last){
        mData[s--] = *it;
        it++;
    }
}

#endif
