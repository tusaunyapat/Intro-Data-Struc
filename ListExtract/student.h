#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
    //write your code here
    if(a == b)return;
    if(mSize == 0)return;

    auto it = a;
    while(it!=b) {
        if(*it  == value) {
            iterator tmp(it.ptr->next);
            it.ptr->prev->next = it.ptr->next;
            it.ptr->next->prev = it.ptr->prev;
            delete it.ptr;
            mSize--;
            it = tmp;


            node *n = new node(value,output.mHeader, output.mHeader->next);

            output.mHeader->next->prev = n;output.mHeader->next = n;
            output.mSize++;
        }
        else it++;
    }



}

#endif
