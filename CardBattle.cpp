#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool win = true;
    multiset<int> s;
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        s.insert(num);
    }
    int i, ans;
    for(i=0; i<m; i++)
    {
        int turn;
        cin >> turn;

        while (turn > 0)
        {
            int player;
            cin >> player;
            auto it = s.upper_bound(player);
            if (it != s.end())s.erase(it);
            else if (win){
                ans = i+1;
                win = false;
                break;
            }
            turn--;

        }
    }
    if(win)cout << i+1;
    else cout << ans;
}
