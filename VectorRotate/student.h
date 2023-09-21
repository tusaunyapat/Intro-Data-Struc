#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  if(k==0 || (last-first) == 0)return;
  T t[last-first];
  CP::vector<T> ::iterator it;
  k %= (last-first);

    int i=0;
  for(it=first+k;it!=last;it++){
    t[i] = *it;
    i++;
  }
  for(it=first;it!=first+k;it++){
    t[i] = *it;
    i++;
  }
  for(int i=0;i<last-first;i++){
    mData[i+first-begin()] = t[i];
  }

}

#endif
