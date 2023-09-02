#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
    int ans=0;
    stack<int> number;
    for(int i=0;i<v.size();i++){
        if (v[i].first == 1){
            number.push(v[i].second);
        }
        else {
            int second = number.top();number.pop();
            int first = number.top();number.pop();
            if (v[i].second == 0){
                ans = first + second;
            }
            if (v[i].second == 1){
                ans = first - second;
            }
            if (v[i].second == 2){
                ans = first * second;
            }
            if (v[i].second == 3){
                ans = first / second;
            }
            number.push(ans);
        }
    }
    ans = number.top();



  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT


  return ans;
}

#endif
