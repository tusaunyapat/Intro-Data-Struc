#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans;
    cin >> n;
    while(n--){
        int f, s, c, l, cor;
        cin >> f >> s >> c >> l >> cor;


            if (f < c and s <= c and l< c and (f + s)%c == l){
                cout << "OK\n";
                continue;
            }
            if(cor==0) {
                cout << "WRONG\n";
            }

        if(cor == 1){
            cout << "WRONG " << (l - s + c)%c << "\n";
        }
        if(cor == 2){
            cout << "WRONG " << (l - f + c)%c << "\n";
        }
        if(cor == 3){
            if(f < l){
                 ans = l+1;
            }
            else ans = f+s-l;
            cout << "WRONG " << ans << "\n";
        }
        if(cor == 4){
            cout << "WRONG " << (f + s)%c << "\n";
        }
    }
}
