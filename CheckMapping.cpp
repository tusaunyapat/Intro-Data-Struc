#include <iostream>
#include <vector>
#include <set>

using namespace std;
int main() {
    int n;
    cin >> n;
    set<int> s;
    vector<int> v;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
        s.insert(num);
    }

    if (v.size() == s.size())cout << "YES";
    else cout << "NO";
}
