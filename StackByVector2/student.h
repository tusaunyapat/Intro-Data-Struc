#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const {
    //write your code here
    return v.size();

}

template <typename T>
const T& CP::stack<T>::top() const {
    //write your code here
    return v[v.size()-1];
}

template <typename T>
void CP::stack<T>::push(const T& element) {
    //write your code here
    v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop() {
    //write your code here
    v.pop_back();
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
    //write your code here
    if(depth >= v.size())v.insert(v.begin(), element);
    else for(int i=v.size(); i>=0; i--) {
            if(i==depth)v.insert(v.begin()+(v.size()-depth), element);
        }
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
    //write your code here
    for(int i=0; i<w.size(); i++) {
        v.push_back(w[i]);
    }
}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
    //write your code here
    int n = v.size();
    for(int i=n-1; i>=0; i--) {
        if(v[v.size()-1] != e) {
            v.pop_back();
        }
        if(v[v.size()-1] == e)break;
    }
}

#endif

