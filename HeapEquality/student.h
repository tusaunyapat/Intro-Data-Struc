#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  //write your code here
  if(mSize != other.size())return false;


  priority_queue<T, Comp> pqA(*this);
  priority_queue<T, Comp> pqB(other);

  while(!pqA.empty()){
    T a = pqA.top();
    pqA.pop();

    if(a != pqB.top())return false;
    pqB.pop();
  }



  return true; // you can change this line
}

#endif
