#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    vector<pair<int, int>> want, result;
    queue<int> shop1, shop2;
    int n, m, total=0;
    int index=0;
    int cnt=0;

    cin >> n >> m;
    for(int i=0;i<m;i++){
        int num;
        cin >> num;
        want.push_back({num, i});
    }
    sort(want.begin(), want.end());

    for(int i=0;i<n;i++){
        int option;
        cin >> option;

        if (option == 1){
            int shop, price;
            cin >> shop >> price;
            if (shop == 1){
                shop1.push(price);
            }
            else shop2.push(price);
        }

        else {
            cnt++;
            if (shop1.empty()){
                total += shop2.front();shop2.pop();
            }
            else if (shop2.empty() or (shop1.front() <= shop2.front())){
                total += shop1.front();shop1.pop();
            }

            else {
                total += shop2.front();
                shop2.pop();
            }
            //cout << total << " ";
            if(index == want.size())break;
            while (want[index].first <= total and index< want.size()){
                result.push_back({want[index].second,cnt });
                index++;
            }



        }

    }
    while (index < m){
        result.push_back({want[index].second,-1 });
        index++;
    }
    //cout << "---------answer----------" << endl;
    sort(result.begin(), result.end());
    for(auto x : result)cout << x.second << " " ;
}
