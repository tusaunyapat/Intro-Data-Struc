#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
 //write some code here
 //don’t forget to return something
    int j = it - v.begin();
    int use = min(k,j);

    for (int i = 0;i<=k;i++){if(it != v.end()) v.erase(it);}

    for (int i = 0;i<use;i++){v.erase(it-use);}

    return v;
}
int main() {
 int n,j,k;
 cin >> n >> j >> k;
 vector<string> v(n);
 for (int i = 0;i < n;i++) {
 cin >> v[i];
 }
 cout << "Result after punch" << endl;
 vector<string> result = punch(v, v.begin() + j, k);
 for (auto &x : result) {
 cout << x << endl;
 }
}
