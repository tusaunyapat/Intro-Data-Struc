#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    int num=1;
    while(true){
        if (num>=n)break;
        num *= 2;

    }
    cout << num - n;
}
