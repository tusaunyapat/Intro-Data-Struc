#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;


    cin >> n >> m;
vector<pair<int, int> > v(n);
    for(int i=0;i<n;i++){
        int year, month;
        cin >> v[i].first >> v[i].second;

    }

    sort(v.begin(), v.end());

    for(int i=0;i<m;i++){
        int year, month;
        cin >> year >> month;

        auto it = upper_bound(v.begin(), v.end(), make_pair(year, month));

        if ( it == v.begin()) {
                cout << "-1 -1 ";continue;}
        it--;
        if( it->first == year and it->second == month) {
                cout << "0 0 ";continue;
        }
        cout << it->first << " " << it->second << " ";



    }

}
