#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];

    while(idx>0){
        int p = (idx-1)/4;

        if(mLess(tmp, mData[p]))break;

        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;

}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    int next;
    while(idx*4+1 < mSize){
        int p = 4*idx+1;
        next = p;

        if(p+1<mSize and mLess(mData[next], mData[p+1]))next = p+1;
        if(p+2<mSize and mLess(mData[next], mData[p+1]))next = p+2;
        if(p+3<mSize and mLess(mData[next], mData[p+1]))next = p+3;
        if(mLess(mData[next], tmp))break;
        mData[idx] = mData[next];
        idx = next;
    }
     mData[idx] = tmp;

}

#endif

