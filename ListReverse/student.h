#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
   if(a==b)return a;
   auto it1 = a, it2 = b;
    it2--;
   while(it1!=it2){
    std::swap(*it1, *it2);
    it1++;
    if(it1 == it2)return a;
   it2--;
   }
   return a;

}

#endif
