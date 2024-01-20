#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
    if(k==1)return mData[0];
    if(k==2){

        T tmp = mData[1];
        for(int i=1;i<mSize;i++){
            if(mLess(tmp, mData[i])){
                tmp = mData[i];
            }
        }
        return tmp;
    }

    if(k==3){
        T tmp = mData[1];
        int idx;
        for(int i=1;i<mSize;i++){
            if(mLess(tmp, mData[i])){
                tmp = mData[i];
                idx = i;
            }
        }
        for(int i=1;i<mSize;i++){
            if(mLess(tmp, mData[i]) and idx != i){
                tmp = mData[i];
            }
        }

    }
  //can include anything
}

#endif
