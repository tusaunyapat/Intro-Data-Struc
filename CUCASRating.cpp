#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    cout << std::fixed << std::setprecision(2);
    int n;
    cin >> n;
    map<string, float> m;
    map<string, float> times;
    set<string> s;
    while(n--){
        string code, teacher;
        float score;
        cin >> code >> teacher >> score;
        s.insert(code);
        s.insert(teacher);
        m[code] += score;
        m[teacher] += score;
        times[teacher]++;
        times[code]++;
    }
    for(auto x : s){
        cout << x << " " << m[x]/times[x] << "\n";
    }
}
