#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
    //your code here
    if(m>s2.size())m = s2.size();
    stack<T> tmp;
    while(k--){
        tmp.push(top());
        pop();
    }
    while(m--){
        tmp.push(s2.top());
        s2.pop();
    }
    while(!tmp.empty()){
        push(tmp.top());
        tmp.pop();
    }

    while(!empty()){
        tmp.push(top());
        pop();
    }
    *this = tmp;

}
#endif
/* 5 3 1 100 1 2 3 4 5 10 20 30*/
