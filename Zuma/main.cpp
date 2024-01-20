#include <bits/stdc++.h>
using namespace std;

int main(){
     int n, k, v;
     int data[1000001];

     cin >> n >> k
      >> v;

     n++;

     for(int i=0;i<n;i++){
        if(i==k)data[i] = v;
        else {
            cin >> data[i];
        }
     }

     int l = k, r = k, tmp_l = k, tmp_r = k;
     int del = 0;
     while((tmp_l >= 0 and tmp_r < n) and (data[tmp_l] == data[tmp_r])){
        while((data[tmp_l - 1] == data[tmp_l]) and tmp_l >=0){tmp_l--;}
        while((data[tmp_r + 1] == data[tmp_r]) and tmp_r < n){tmp_r++;}

        if(tmp_r -tmp_l + 1 - del < 3)break;
        del = (tmp_r - tmp_l + 1);
        l = tmp_l;
        r = tmp_r;
        tmp_l--;
        tmp_r++;

     }

     int i= 0;
     while(i<n){
        if(l<=i and r>=i and del > 0){
            i+=del;
            continue;
        }
        cout << data[i] << " ";
        i++;
     }

}
