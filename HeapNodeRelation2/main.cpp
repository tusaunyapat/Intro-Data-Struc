#include <bits/stdc++.h>

using namespace std;


int diff_length(long long k, long long a, long long b){
    long long parent;
    if(a>=b)swap(a, b);
    int i=0;
    while(b>a){
        b = (b-1)/k;
        i++;
    }
    if(b == a)return i;
    return -1;


}

int main()
{
    int k, n;
    long long a, b;

    cin >> n;
    while(n--){
        cin >> k >> a >> b;

        int level_a = log((k-1)*(a+1))/log(k);
        int level_b = log((k-1)*(b+1))/log(k);


        if(diff_length(k, a, b) == 1)cout << "1 ";
        else if(diff_length(k, a, b) >1)cout << "2 ";
        else if (level_a != level_b) cout << "3 ";
        else if(level_a == level_b) cout << "4 ";


    }


}
