#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    map<string, int> m;
    cin >> n;
    for(int i=0;i<n;i++) {
        string name;
        cin >> name;
        m[name]++;
    }

    for(auto &x : m){
        if (x.second > 1)cout << x.first << " " << x.second << endl;
    }

}
