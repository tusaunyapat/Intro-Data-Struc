#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b) {
    CP::stack<T> tmp;

    for(int i=0;i<=b;i++){
        tmp.push(top());
        if(i>=a){
            tmp.push(top());
        }
        pop();
    }

    while (!tmp.empty()){
        push(tmp.top());
        tmp.pop();
    }



}

#endif
