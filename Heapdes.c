#include <vector>
#include <queue>
#include <iostream>
using namespace std;
int main(){
    int n, a;
    vector<int> ans;
    queue<int> q;
    cin >> n >> a;
    int idx = 0;
    q.push(0);


    while(!q.empty()){
        if(idx*2 + 1 < n){
            ans.push_back(idx*2+1);
            q.push(idx*2+1)
        }

        if(idx*2 + 2 < n){
            ans.push_back(idx*2+2);
             q.push(idx*2+2)
        }
        idx = q.front();
        q.pop();
    }
}
