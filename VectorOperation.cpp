#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i=0;i<n;i++) {
        string order;
        cin >> order;
        if (order == "pb") {
            int num;
            cin >> num;
            v.push_back(num);
        }
        if (order == "sa") sort(v.begin(), v.end());
        if (order == "sd") {
            vector<int> v1, v2;
            for (int i=0;i<v.size();i++){
                v1.push_back(-1*v[i]);
            }
            sort(v1.begin(), v1.end());
            for (int i=0;i<v.size();i++){
                v2.push_back(-1*v1[i]);
            }
            v = v2;
        }

        if (order == "r") {
            vector<int> v3;
            for (int i = v.size()-1; i>=0;i--){
                v3.push_back(v[i]);
            }
            v = v3;
        }

        if (order == "d") {
            int del;
            cin >> del;
            v.erase(v.begin()+del);
        }

    }
    for (int i=0;i<v.size();i++){
    cout << v[i] << " ";
    }
}
