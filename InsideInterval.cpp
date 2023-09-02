#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> s(n);

    for(int i=0;i<n;i++){
        cin >> s[i].first >> s[i].second;

    }
    sort(s.begin(), s.end());

    for(int i=0;i<m;i++){
        int num;
        cin >> num;
        auto it = upper_bound(s.begin(), s.end(), make_pair(num, 200000009));

        if (it!=s.begin()){
            it--;
        }
        if(num >= it->first and num <= it->second)cout << "1 ";
        else cout << "0 ";
    }




}
