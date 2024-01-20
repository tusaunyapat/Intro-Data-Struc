#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
    T f = mData[pos];
    int n=0;
    for(int i=0;i<mSize;i++){
        if(mLess(f,mData[i]))n++;
    }
    return n;
}

#endif
