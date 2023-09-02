#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b) {
 //write your code only in this function
    int num = b;
    vector<int> v1;
    for (size_t i =0;i<v.size();i++){
        if ((i < static_cast<size_t>(a )) || (i > static_cast<size_t>(b))) {           v1.push_back(v[i]);
        }
        else {
            //cout << num;
            v1.push_back(v[num]);
            num--;
        }
    }
    v = v1;
}
int main() {
 //read input
 int n,a,b;
 cin >> n;
 vector<int> v;
 for (int i = 0;i < n;i++) {
 int c;
 cin >> c;
 v.push_back(c);
 }
 cin >> a >> b;
 //call function
 reverse(v,a,b);
 //display content of the vector
 for (auto &x : v)
 cout << x << " ";
 cout << endl;

}
