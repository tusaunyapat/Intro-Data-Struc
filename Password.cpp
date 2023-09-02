#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m, l, i;
    vector<int> change;
    set<string> password;

    cin >> n >> m >> l;
    for(i=0;i<l;i++){
        int num;
        cin >> num;
        change.push_back(num);
    }

    for(i=0;i<n;i++){
        string pass;
        cin >> pass;
        password.insert(pass);
    }

    for(i=0;i<m;i++){
        string dataa = "";
        for(int j=0;j<l;j++){
            char data;
            cin >> data;
            int add = change[j]%26;
            if(data+add > 122)data -= (26-add);
            else data += add;

            dataa += data;
            //cout << data[j] << endl;
        }


        if (password.find(dataa) != password.end())cout << "Match\n";
        else cout << "Unknown\n";

    }


}
