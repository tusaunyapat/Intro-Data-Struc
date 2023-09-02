#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    string name;
    map<string, int> m;
    set<string> candidate;

    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> name;
        candidate.insert(name);
        m[name]++;
    }
    vector<int> score;
    for(auto x : candidate){
        score.push_back(m[x]);
    }
    sort(score.begin(), score.end());
    if (candidate.size()<k)cout << score[0];
    else cout << score[score.size()-k] << " ";

}
