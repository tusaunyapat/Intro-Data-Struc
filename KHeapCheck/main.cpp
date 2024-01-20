#include <iostream>
#include <vector>

using namespace std;

int main()
{std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n;
    cin >> n;

    while(n--){
        int num, k;
        cin >> num >> k;
        vector<int> v(num);
        for(int i=0;i<num;i++)cin >> v[i];
        bool ans = true;

        for(int j=0;j<num;j++){

            if(((j-1)/k >= 0) and v[j] > v[(j-1)/k]){ans=false;break;}
        }
        if(ans)cout << "true" <<endl;
        else cout << "false" << endl;
    }
}
