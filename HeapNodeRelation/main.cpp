#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    while(m--){
        int a, b;
        cin >> a >>  b;
        int A = a;
        int B = b;

        bool s = false;

        if(a>b){
                swap(a, b);s = true;}

        while(b>a){
            b = (b-1)/2;
        }

        if(b==a and A!=B){
            if(s)cout << "b is an ancestor of a\n";
            else cout << "a is an ancestor of b\n";
            continue;
        }

        if(A==B)cout << "a and b are the same node\n";
        else cout << "a and b are not related\n";


    }





}
