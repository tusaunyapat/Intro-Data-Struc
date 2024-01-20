#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
   CP::stack<T> tmp;

   for(auto it = first;it!=last;it++){

        tmp.push(*it);

   }
   return tmp;
}

#endif
