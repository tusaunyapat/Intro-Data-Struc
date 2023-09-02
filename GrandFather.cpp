#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, m, i;
    cin >> n >> m;

    map<long long, long long> fam;

    for(i=0;i<n;i++){
        long long dad, son;
        cin >> dad >> son;
        fam[son] = dad;
    }

    //for(auto &x : fam)cout << "grandpa" << fam[fam[x.first]] << " " <<"dad " << fam[x.first] << "son " << x.first<<endl;

    for(i=0;i<m;i++){
        long long cou1, cou2;
        cin >> cou1 >> cou2;
       // cout << fam[fam[cou1]] << " " << fam[fam[cou2]] << endl;
        if (cou1 == cou2)cout<<"NO" <<endl;
        else {
            if (fam[fam[cou1]] == fam[fam[cou2]] && fam[fam[cou1]] != 0)cout << "YES"<<endl;
            else cout << "NO"<<endl;
        }
    }
}
