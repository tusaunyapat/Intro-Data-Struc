#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int t = mCap - mSize;
    int o = other.mCap - other.mSize;

    if(t == o)return 0;
    if(t < o)return -1;
    return 1;
}

#endif
