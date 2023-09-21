#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, start, i;

    cin >> n >> m >> start;
    vector<pair<int, int>> day_amount(n+1);
    vector<int> moneyTotal(n+1), dayTotal(n+1);

    day_amount[0].first = 0;
    day_amount[0].second = start;
    dayTotal[0] = 0;
    moneyTotal[0] = start;

    for(i=1;i<=n;i++){
        cin >> day_amount[i].first >> day_amount[i].second;
        dayTotal[i] =  day_amount[i].first ;

        moneyTotal[i] = (dayTotal[i] - dayTotal[i-1]) * day_amount[i-1].second + moneyTotal[i-1] ;
        if (i==1)moneyTotal[i] -= start;
    }
    //--test------------------------------------------------------
    cout << "day amount\n";
    for(auto x : day_amount)cout << x.first << " " << x.second << "\n";
    cout << "day\n";
    for(auto x : dayTotal)cout << x << " ";
    cout << "\nmoney\n";
    for(auto x : moneyTotal)cout << x << " ";
    //--test------------------------------------------------------

    for(i=0;i<m;i++){
        int p;
        cin >> p;
        auto it = lower_bound(moneyTotal.begin(), moneyTotal.end(), p);
        int pos = distance(moneyTotal.begin(), it);
        int more = p - moneyTotal[pos-1];
        if(more<0)more=0;
        if (p == moneyTotal[pos])more = 0;
        cout << "found at " << pos << endl;
        if (pos > 0)
            cout <<"more = " << more << "\n\n";
        int answer = dayTotal[pos];
        if(pos>0)answer= dayTotal[pos-1];
        pos--;
        int day_more = more / day_amount[pos].second;
        if(more%day_amount[pos].second != 0)day_more++;
        answer += day_more;
        cout << "ANS -------------- " << answer << "\n\n";
    }

}
