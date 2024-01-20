#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <string>

using std::string;

void change_1(std::stack<std::vector<std::queue<int>>> &a, int from, int to)
{
    // your code here
    std::stack<std::vector<std::queue<int>>> ans;
    while(!a.empty()){
        std::vector<std::queue<int>> tmp_vec, new_vec;
        tmp_vec = a.top();  a.pop();

        for(auto x : tmp_vec){
            std::queue<int> new_que;
            while(!x.empty()){
                if(x.front() == from)new_que.push(to);
                else new_que.push(x.front());
                x.pop();
            }
            new_vec.push_back(new_que);
        }
        ans.push(new_vec);

    }

}

void change_2(std::map<string, std::pair<std::priority_queue<int>, int>> &a, int from, int to)
{
    // your code here
}

void change_3(std::set<std::pair<std::list<int>, std::map<int, std::pair<int, string>>>> &a, int from, int to)
{
    // your code here
}

#endif
