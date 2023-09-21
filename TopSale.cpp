#include <bits/stdc++.h>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m;
    cin >> n >> m;
    map<int, set<int>> most;
    map<int, int> product;

    for(int i=0; i<n; i++) {
        int p;
        cin >> p;
        product[p] = 0;
    }

    for(int i=0; i<m; i++) {
        int option;
        cin >> option;
        if(option == 1) {
            int pd, amount;
            cin >> pd >> amount;
            if (product.find(pd) == product.end())continue;
            int num = product[pd];
            most[num].erase(pd);
            if (most[product[pd]].empty())most.erase(product[pd]);
            product[pd]+=amount;


            most[product[pd]].insert(pd);

        }

        else if (option == 2) {

            int k;
            cin >> k;
            auto it = most.lower_bound(k);

            if(it == most.begin())cout << "NONE\n";
            else {
                it--;
                cout << *(it->second.rbegin()) << "\n";
            }

        }


    }


}
