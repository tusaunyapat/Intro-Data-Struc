#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
  //write your code here
  //
  // YOU CANNOT CALL push or pop
  if(mSize != other.mSize())return false;

  for(int i=0;i<mSize;i++){
    if(mData[mFront+i]!= other.mData[mFront+i]){
        return false;
  }
  return true;
}

#endif
