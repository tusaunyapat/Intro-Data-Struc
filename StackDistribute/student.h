#ifndef __STUDENT_H__
#define __STUDENT_H__
using namespace std;
template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
    //write your code here
    vector<vector<T>> ans(k);

    int t = 0;
    int n = mSize/k;
    int m = mSize%k;
    int p = mSize - 1;
    for(int i=0;i<k;i++){
        int need = n;
        if(i<m){
            need++;
        }
        while(need--){
            ans[i].push_back(mData[p--]);
        }
    }
    return ans;
}
#endif
/*8 2 1 2 3 4 5 6 7 8*/
