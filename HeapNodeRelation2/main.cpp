#include <bits/stdc++.h>
using namespace std;
int main() {
    int round;
    cin >> round;
    while(round--) {
        int k, a, b;
        cin >> k >> a >> b;
        int B = b;
        int A = a;

        if(a>b)swap(a, b);
        if((b-1)/k == a and b!=a) {
            cout << "1 ";
            continue;
        }


        while(b>a) {
            b = (b-1)/k;
        }
        if(b==a and B!=A) {
            cout << "2 ";
            continue;
        }



        if((int)(log(B+1)*log(k-1)/log(k)) == (int)(log(A+1)*log(k-1)/log(k)))cout << "4 ";
        else cout << "3 ";

    }


}
