#include <iostream>
using namespace std;

int main {
    int n, m, r;
    int i, j;

    int mapp[n][m];

    cin >> n >> m;
    cin >> r;
    for (i = 0;i < n;i++) {
        for (j = 0;j < m;j++){
            cin >> mapp[i][j];
        }
    }

    for (i = 0;i < n;i++) {
        for (j = 0;j < m;j++){
            cout << mapp[i][j];
        }
    }

    return 0;

}
