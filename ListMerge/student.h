#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  auto p = end().ptr->prev;

  for(auto &l : ls){
    p->next = l.begin().ptr;
    l.begin().ptr->prev = p;

    p = l.end().ptr->prev;
    mSize += l.mSize;

    l.mHeader->prev = l.mHeader;
    l.mHeader->next = l.mHeader;
    l.mSize = 0;

  }

  p->next = mHeader;
  mHeader->prev=p;
}

#endif

// 3 4 1 2 3 3 10 20 30 1 100 0 3 991 992 993
