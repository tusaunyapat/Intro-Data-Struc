#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
 //write your code only in this function
 vector<int> v1, v2;
 for(int i =0;i<v.size();i++){
    if(v.begin()+i<a){v1.push_back(v[i]);}
 }

 for (int i = b - v.begin()-1; i >= a - v.begin();i--){
    v1.push_back(v[i]);
 }
 for(int i =0;i<v.size();i++){
    if(v.begin()+i>=b){v1.push_back(v[i]);}
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
 reverse(v,v.begin()+a,v.begin()+b+1);
 //display content of the vector
 for (auto &x : v) {
 cout << x << " ";
 }
 cout << endl;
}
