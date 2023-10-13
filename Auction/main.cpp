#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, round;
    cin >> n >> m >> round;
    int t;

    vector<int> item;
    vector<vector <pair<int, int> >> auction(n);

    for(int i=0;i<n;i++){
        int c;
        cin >> c;
        item.push_back(c);
    }

    for(int i=0;i<round;i++){
        char choice;
        cin >> choice;
        if(choice == 'B'){
            int u, it, value;
            cin >> u >> it >> value;
            it--;u--;
            bool found = false;
            for(int j=0;j<auction[it].size() && !found ;j++){
                if(auction[it][j].second == u){
                    auction[it][j].first = value;
                    found = true;
                }


            }
            if(!found){
                    auction[it].push_back(make_pair(value, u));
            }
        }

        if(choice == 'W'){
            int u, it;
            cin >> u >> it;
            u--;it--;
            bool found = false;
            for(int j=0;j<auction[it].size() && !found;j++){
                if((auction[it][j].second == u) ){
                    auction[it].erase(auction[it].begin()+j);
                    found = true;
                }
            }
        }
    }
for(int i=0;i<n;i++)
    {
        sort(auction[i].begin(), auction[i].end());
    }


    vector<vector<int>> get(m);

    for(int i=0;i<n;i++){
        int k = auction[i].size()-1;

        for(int j=0;j<item[i] and k >=0;j++){
            get[auction[i][k].second].push_back(i+1);
            k--;
        }

    }

    for(auto i:get)
    {
        for(int j=0;j<i.size();j++)
        {
            cout<<i[j]<<" ";
        }
        if(i.size()==0)
        {
            cout<<"NONE";
        }
        cout<<endl;
    }







}
