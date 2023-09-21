#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
    //write your code here
    if(mSize < K)K = mSize;
    while(K--){
        pop();
    }


}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
    //write your code here
    //
    //don't forget to return an std::stack
    if(mSize < K)K = mSize;
    std::stack<T> ans, tmp;

    while(K--){
        T a = top();
        pop();
        tmp.push(a);
    }

    while(!tmp.empty()){
        T a = tmp.top();
        tmp.pop();
        ans.push(a);
    }
    return ans;
}

#endif
