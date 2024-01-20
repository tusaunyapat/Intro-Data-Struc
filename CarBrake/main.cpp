#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    vector<pair<int, int>> t_d;
    vector<int> v(500001);
    for(int i=0; i<n; i++) {
        long long t, d;
        cin >> t >> d;
        v[t] = (-1)*d;

        t_d.push_back(make_pair(t, d));
    }
    v[0] = k;

    for(int i=1; i<500001; i++) {
        v[i] = v[i-1] +  v[i];
        if(v[i] < 0)v[i]=0;
    }

    while(m--) {
        int que, con;
        cin >> que >> con;

        if(que == 1) {
            cout << v[con] << "\n";
        }

        else {
            int ans = 0;
            for(int i=0; i<v.size(); i++) {
                if(v[i] < con) {
                    ans = i;
                    break;
                }
            }
            cout << ans << "\n";
        }
    }







}
