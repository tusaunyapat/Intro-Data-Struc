#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
    //your code here
    T minn = mData[(mFront + *std::min_element(pos.begin(), pos.end())) % mCap];

    for(int i=0; i<pos.size(); i++) {
        if(pos[i] < mSize)
            if(comp(mData[(mFront + pos[i])%mCap], minn)) {
                minn = mData[(mFront + pos[i])%mCap];
            }
    }

    //should return something
    return minn;
}

#endif
