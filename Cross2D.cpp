#include <iostream>
#include <vector>
using namespace std;
void cross_2d(vector<vector<int>> &m,int r1, int r2, int c1, int c2) {
//your code here


    int i, j;
    vector<vector<int>> ans;
    vector<vector<bool>> t(m.size(),vector<bool>(m[0].size(), true) );
    for(i=0; i<m.size(); i++) {
        if(i>=r1 and i <= r2) {
            for(j=0; j<m[i].size(); j++) {
                t[i][j] = false;
            }
        }
    }
    for(j=0; j<m[0].size(); j++) {
        if(j>=c1 and j<= c2) {
            for(i=0; i<m.size(); i++) {
                t[i][j] = false;
            }
        }
    }
    for(i=0; i<m.size(); i++) {
        vector<int> tmp;
        for(j=0; j<m[0].size(); j++) {
            if(t[i][j]) {
                tmp.push_back(m[i][j]);
            }

        }
        if(!tmp.empty())
            ans.push_back(tmp);
    }

    for (int i =0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << t[i][j] << " ";
        }
        cout << "\n";
    }

    m = ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>> m;
    int r,c,r1,r2,c1,c2;
    cin>> r >> c;
    cin >> r1 >> r2 >> c1 >> c2;
    m.resize(r);
    for (int i =0; i < r; i++) {
        m[i].resize(c);
        for (int j = 0; j < c; j++) {
            cin >> m[i][j];
        }
    }
    cross_2d(m,r1,r2,c1,c2);
    for (int i =0; i < m.size(); i++) {
        for (int j = 0; j < m[i].size(); j++) {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
