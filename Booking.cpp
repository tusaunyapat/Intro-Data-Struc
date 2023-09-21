#include <bits/stdc++.h>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    cin >> n >> m;
    int i;

    multiset<pair<string, pair<string, bool>>> ticket;

    for(i=0; i<n; i++) {
        string flight, seat;
        cin >> flight >> seat;
        ticket.insert({flight, {seat, false}});
    }

    for(i=0; i<m; i++) {
        int num;

        cin >> num;
        vector<string> flight(num), seat(num);
        bool success = true;
        for(int j=0; j<num; j++) {
            cin >> flight[j] >> seat[j];
        }

        for(int j=0; j<num; j++) {
            if (ticket.find({flight[j], {seat[j], false}}) == ticket.end()) {
                success = false;
                break;
            }
        }
        if (success) {
            for(int k=0; k<num; k++) {
                ticket.erase({flight[k], {seat[k], false}});
                ticket.insert({flight[k], {seat[k], true}});
            }
        }


        if (success)cout << "YES\n";
        else cout << "NO\n";
    }
}
