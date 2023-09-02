#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1,vector<int> &v2,
 int start1, int end1,
 int start2, int end2) {
     vector<int> ::iterator it1, it2;


     vector<int> vt1, vt2;
     for(int i=start1;i< end1;i++){
        vt1.push_back(v1[i]);
     }

     for(int i=start2;i< end2;i++){
        vt2.push_back(v2[i]);
     }

     int i=0;
     while (i < end1 - start1){
        v1.erase(v1.begin() + start1);
        i++;
     }
     i=0;
     while (i < end2 - start2){
        v2.erase(v2.begin() + start2);
        i++;
     }

     while (!vt1.empty()){
        v2.insert(v2.begin() + start2, *(vt1.end()-1));
        vt1.erase(vt1.end()-1);
     }
     while (!vt2.empty()){
        v1.insert(v1.begin() + start1, *(vt2.end()-1));
        vt2.erase(vt2.end()-1);
     }
}

int main() {
 //read input
 int n,c;
 vector<int>v1,v2;
 cin >> n; //number of v1
 for (int i = 0;i < n;i++) {
 cin >> c;
 v1.push_back(c);
 }
 cin >> n; //number of v2
 for (int i = 0;i < n;i++) {
 cin >> c;
 v2.push_back(c);
 }
 int s1,e1,s2,e2; //position
 cin >> s1 >> e1 >> s2 >> e2;
 //call the function
 vector_swap(v1,v2,s1,e1,s2,e2);
 //display content of the stack
 cout << "v1 has " << v1.size() << endl;
 for (auto &x : v1) { cout << x << " "; }
 cout << endl;
 //display content of the stack
 cout << "v2 has " << v2.size() << endl;
 for (auto &x : v2) { cout << x << " "; }
 cout << endl;
}
