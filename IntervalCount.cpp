#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int n, m, k;
    vector<int> v;

    cin >> n >> m >> k;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    for(int i=0;i<m;i++) {
        int num;
        cin >> num;
        auto upper = upper_bound(v.begin(), v.end(), num+k);
        auto lower = lower_bound(v.begin(), v.end(), num-k);
        cout << distance(lower,upper)<< " ";

    }

}
