#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
void member_multiply(vector<int> &v,
                    vector<pair<vector<int>::iterator,int>> &multiply) {

    vector<pair<int, int>> add;
    vector<int> v1;

    for(int i=0;i<multiply.size();i++){
        add.push_back({multiply[i].first-v.begin(), multiply[i].second});
    }
    sort(add.begin(), add.end());
    int index=0;
    for(int i=0;i<v.size();i++){
        if (i==add[index].first){
            int n = add[index].second;
            while(n--){
                v1.push_back(v[i]);
            }

            index++;
        }
        v1.push_back(v[i]);
    }
    v = v1;



}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin >> n >> m;

    vector<int> v(n);
    vector<pair<vector<int>::iterator,int>> multiply(m);

    for (int i = 0;i < n;i++) cin >> v[i];

    for (int i = 0;i < m;i++) {
        int a,b;
        cin >> a >> b;
        multiply[i].first = v.begin()+a;
        multiply[i].second = b;
    }

    member_multiply(v,multiply);

    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v) {
    cout << x << " ";
    }
    cout << endl;
}
