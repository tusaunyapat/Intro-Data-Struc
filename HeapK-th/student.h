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
        if(mLess(mData[1], mData[2])){
            return mData[2];
        }
        return mData[1];
    }

    if(k==3){
        T tmp = mData[1];
        if(mLess(mData[2], mData[1]))tmp = mData[2];
        for(int i=0;i<4;i++){
            if(3+i>mSize)break;
            if(mLess(tmp, mData[i+3]))tmp = mData[i+3];
        }
        return tmp;

    }
  //can include anything
}

#endif
