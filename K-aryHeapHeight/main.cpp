#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    if(k == 1)cout << n-k;

    else cout << (int)((log(n) + log(k-1))/log(k)) ;
}
