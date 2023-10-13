#include <bits/stdc++.h>
using namespace std;
int total[100009];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, start;
    cin >> n >> m >> start;

    for(int i=0;i<n;i++){
        int d, c;
        cin >> d >> c;
        total[d] = c;
    }

    total[0] = start;
    int add ;
    for(int i=1;i<=100002;++i){
        if(total[i]!=0)start = total[i];
        total[i] = total[i-1] + start;
    }

    while(m--){
        int p, x;
        cin >> p >> x;
        if(total[x] >= p){
            cout << (lower_bound(&total[0], &total[x+1], p) - &total[0]) << " ";
        }
        else {
            cout << (lower_bound(&total[x], &total[100002], p+total[x]) - &total[0]) << " ";
        }
    }
}
