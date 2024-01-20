#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, a;
    vector<int> ans;
    queue<int> q;
    cin >> n >> a;
    int idx = a;
    ans.push_back(a);
    q.push(a);


    while(!q.empty()) {
        q.pop();
        if(idx*2 + 1 < n) {
            ans.push_back(idx*2+1);
            q.push(idx*2+1);
        }

        if(idx*2 + 2 < n) {
            ans.push_back(idx*2+2);
            q.push(idx*2+2);
        }
        idx = q.front();

    }
    cout << ans.size() << endl;
    for(auto v: ans){
        cout << v << " ";
    }
}
