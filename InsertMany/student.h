#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
    //write your code here
    CP::vector<T> tmp;
    sort(data.begin(), data.end());
    int l = 0;
    for(int i=0; i<=mSize; i++) {
        if(i == data[l].first) {
            tmp.push_back(data[l].second);
            l++;
        }
        if(i!=mSize)tmp.push_back(mData[i]);
    }
    *this = tmp;
}

#endif
