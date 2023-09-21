#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>
using namespace std;
template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    vector<pair<T, size_t>> ans(k.size());
    map<T, size_t> m;
    for(size_t i=0;i<mSize;i++){
        m[mData[(mFront+i)%mCap]]++;
    }

    for(size_t i=0;i<k.size();i++){
        ans[i] = {k[i], m[k[i]]};
    }
    return ans;
}

#endif
