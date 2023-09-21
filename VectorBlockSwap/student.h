#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
    //write your code here

    if (a < begin() || b < begin() || std::abs(a - b) < m || m <= 0 || a >= end() || b >= end())
    return false;
    for(int i=0;i<m;i++){
        int tmp = *(a);
        mData[a-begin()] = *(b);
        mData[b-begin()] = tmp;
        a++;
        b++;
    }
    return true;
}

#endif
