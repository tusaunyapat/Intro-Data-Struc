#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v, v2;
    vector<int> answer;

    for (int i=0;i<n;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }


    for(int i=0;i<m;i++){
        int temp;
        cin >> temp;
        v2.push_back(temp);
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++){
        if ((find(answer.begin(), answer.end(),v[i]) == answer.end()) &&(find(v2.begin(), v2.end(),v[i]) != v2.end())) {
            answer.push_back(v[i]);
        }
    }

    for(auto &x : answer)cout << x << " ";

}
