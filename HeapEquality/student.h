#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  //write your code here
  if(mSize != other.size())return false;

    priority_queue<T, Comp> pq1(*this);
    priority_queue<T, Comp> pq2(other);

    while(!pq1.empty()){
        T a = pq1.top();
        pq1.pop();

        if(a != pq2.top()){
            return false;
        }
        pq2.pop();
    }





  return true; // you can change this line
}

#endif
