#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int n, w;
    cin >> n >> w;
    vector<int> v(n), answer;


    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    for(int i=1;i<answer.size();i++){
        cout << answer[i] << " ";
    }
    multiset<int> s(v.begin(), v.begin()+w);
    if (n-w==0){

        s.insert(v[w]);
        cout << *next(s.begin(), w/2) << " ";
        s.erase(s.find(v[w]));
    }

    for(int i=0;i<n-w;i++){
        s.insert(v[i+w]);
        cout << *next(s.begin(), w/2) << " ";
        s.erase(s.find(v[i]));
    }

}
