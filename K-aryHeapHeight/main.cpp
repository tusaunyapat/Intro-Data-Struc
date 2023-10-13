#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long n, k;

    cin >> n >> k;
    long long ans;


    long long now=1;
    long long cnt = 1;
    int i=0;

    if(k==1)ans = n-1;
    else {
        while(cnt < n){
            cnt += pow(k, ++i);
        }
        ans = i;
    }


    cout << ans ;
}
