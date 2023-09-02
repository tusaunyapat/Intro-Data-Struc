#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<string, int> m;
    int maxx=0;

    for(int i=0;i<n;i++){
        string name;
        cin >> name;
        m[name]++;
        if (m[name] > maxx)maxx=m[name];
    }
    map<string, int> ::iterator it = m.end();
    it--;
    for(auto it = m.end();it!=m.begin();it--){
        if(maxx == it->second){
            cout << it->first << " " << it->second;
            break;
        }

    }

}
