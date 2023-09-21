#include "stack.h"
#include "queue.h"

namespace CP {
template<typename T>
void stack<T>::appendStack(stack<T> s) {
    stack<T> tmp, ans;
    while(!s.empty()) {
        tmp.push(s.top());
        s.pop();
    }
    while(!tmp.empty()) {
        ans.push(tmp.top());
        tmp.pop();
    }
    while(!empty()) {
        tmp.push(top());
        pop();
    }
    while(!tmp.empty()) {
        ans.push(tmp.top());
        tmp.pop();
    }
    mSize += s.size();
    expand(std::max(mSize*2, mCap));
    *this = ans;

}

template<typename T>
void stack<T>::appendQueue(queue<T> q) {
    stack<T> tmp, ans;
    while(!q.empty()) {
        tmp.push(q.front());
        q.pop();
    }
    while(!tmp.empty()) {
        ans.push(tmp.top());
        tmp.pop();
    }
    while(!empty()) {
        tmp.push(top());
        pop();
    }
    while(!tmp.empty()) {
        ans.push(tmp.top());
        tmp.pop();
    }
    mSize += q.size();
    expand(std::max(mSize*2, mCap));
    *this = ans;

}

template<typename T>
void queue<T>::appendStack(stack<T> s) {

    expand(std::max(mSize*2, mCap));

    queue<T> ans;

    for(int i=0; i<mSize; i++) {
        ans.push(mData[i]);
    }

    int i=ans.size();
    while(!s.empty()) {
        ans.push(s.top());
        s.pop();
    }
    *this = ans;
    mSize = ans.size();


}

template<typename T>
void queue<T>::appendQueue(queue<T> q) {
    expand(std::max(mSize*2, mCap));

    queue<T> ans;

    for(int i=0; i<mSize; i++) {
        ans.push(mData[i]);
    }
    while(!q.empty()) {
        ans.push(q.front());
        q.pop();
    }
    *this = ans;
    mSize = ans.size();

}
}
