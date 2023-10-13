#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <math.h>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  if(mSize == 0)return -1;
  int i = 0;
  int cnt = 1;
  while(cnt < mSize){
    cnt += pow(2, ++i);
  }
  return i;

}

#endif

