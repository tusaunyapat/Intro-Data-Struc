#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
//you can include any other file here
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
    //do someting here
    T *newData = new T[mCap];
    std::set<T> s;
    int j=0, k=0;
    for(int i=0; i<mSize; i++) {
        if(s.find(mData[i]) == s.end()) {
            s.insert(mData[i]);
            newData[j] = mData[i];
            j++;
            k++;
        }
    }

    delete[] mData;
    mSize = k;
    mData = newData;
}

#endif
