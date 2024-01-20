#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
    //write your code here
    CP::list<T> result;

        if(it!=end()){
            result.mHeader->next = it.ptr;
    result.mHeader->prev = end().ptr->prev;
it.ptr->prev->next = mHeader;
    mHeader->prev= it.ptr->prev;




    result.mHeader->prev->next = result.mHeader;
    result.mHeader->next->prev = result.mHeader;



 result.mSize = mSize - pos;
    mSize = pos;

        }




    return result;
}

#endif
