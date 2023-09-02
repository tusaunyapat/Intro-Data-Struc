#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    set<int> a, ans;
    while(n--){
        int num;
        cin >> num;
        a.insert(num);
    }
    while(m--){
        int num;
        cin >> num;
        if (a.find(num) != a.end())ans.insert(num);
    }
    for(auto x : ans)cout << x << " ";
}
