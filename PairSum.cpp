#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n ,m;
    cin >> n >> m;
    vector<int> s(n);

    int i;

    for(i=0;i<n;i++){

        cin >> s[i];
    }
    sort(s.begin(), s.end());

    for(i=0;i<m;i++){
        int num;
        cin >> num;
        bool found = false;

        int left=0;
        int right = s.size()-1;

        int sum;
        while(left<right){
            sum = s[left] + s[right];
            if (num == sum){
                found = true;
                break;
            }
            else {
                if (sum < num)left++;
                else right--;
            }

        }
        if(!found) cout <<"NO\n";
        else cout << "YES\n";

    }

}
