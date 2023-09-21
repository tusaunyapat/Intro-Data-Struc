#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    //write your code here
    CP::vector<T> tmp;
    bool work = true;
    int n = 0;
    int i = 0;
    while(n<mSize){
        if(n!=pos[i] ){
            tmp.push_back(mData[n]);
        }
        else if (i<pos.size()-1) {
            i++;
        }
        n++;
    }
    *this = tmp;
}

#endif
