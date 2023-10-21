#include <stdexcept>
#include <algorithm>
#include <iostream>
#include "priority_queue.h"
#include "student.h"
#include <vector>
#include <cstdlib>
#include <ctime>

int myrandom (int i) { return std::rand()%i;}

bool test1() {
  CP::priority_queue<int> a,b;
  std::vector<int> v1 = {100,80,90,4,3,2,1};
  std::vector<int> v2 = {100,90,80,4,3,1,2};
  for (auto &x : v1) { a.push(x);}
  for (auto &x : v2) { b.push(x);}

  return (a == b && b == a);
}

bool test2() {
  CP::priority_queue<int> a,b;
  std::vector<int> v1 = {1,5,4,2,-3,9,6};
  std::vector<int> v2 = {1,5,4,2,9,6};
  for (auto &x : v1) { a.push(x); }
  for (auto &x : v2) { b.push(x); }
  return ( ((a == b) == false)  && ((b == a) == false));
}

bool test3() {
  CP::priority_queue<int> a,b;
  std::vector<int> v1 = {1,5,4,2,-3,9,6};
  std::vector<int> v2 = {1,5,4,2,-3,6};
  for (auto &x : v1) { a.push(x); }
  for (auto &x : v2) { b.push(x); }
  return ( ((a == b) == false)  && ((b == a) == false));
}

bool test4() {
  CP::priority_queue<std::string> a,b;
  std::vector<std::string> v1 = {"X","AA","BB"};
  std::vector<std::string> v2 = {"X","BB","AA"};
  for (auto &x : v1) { a.push(x); }
  for (auto &x : v2) { b.push(x); }
  return ( ((a == b) == true)  && ((b == a) == true));
}

bool test5() {
  CP::priority_queue<std::string> a;
  std::vector<std::string> v1 = {"A","AA","ABC","A"};
  for (auto &x : v1) { a.push(x); }
  CP::priority_queue<std::string> b(a);
  CP::priority_queue<std::string> c;
  c = b;
  return
    ( ((a == b) == true)  && ((b == a) == true)) &&
    ( ((a == c) == true)  && ((c == a) == true)) &&
    ( ((b == c) == true)  && ((c == b) == true));
}

typedef bool(*Comparator)(const int &, const int &);

bool c1(const int &a, const int &b) {
  return a < b;
}

bool c2(const int &aa, const int &bb) {
  return (aa< bb) && (aa < bb);
}

bool c3(const int &a, const int &b) {
  return a > b;
}

bool test6() {
  CP::priority_queue<int,Comparator> a(c1);
  CP::priority_queue<int,Comparator> b(c2);
  std::vector<int> v1 = {1,5,4,2,-3,9,6,-1,-3,-5,-6,-8,-10,-100,-200,-300,-400,-500,-600,-700,-800,-900,-1000,-2000};
  std::random_shuffle( v1.begin(), v1.end(),myrandom);
  for (auto &x : v1) { a.push(x); }
  std::random_shuffle( v1.begin(), v1.end(),myrandom);
  for (auto &x : v1) { b.push(x); }
  return ( ((a == b) == true)  && ((b == a) == true));
}

bool test7() {
  CP::priority_queue<int,Comparator> a(c1);
  CP::priority_queue<int,Comparator> b(c3);
  std::vector<int> v1 = {1,5,4,2,-3,9,6,-1,-3,-5,-6,-8,-10,-100,-200,-300,-400,-500,-600,-700,-800,-900,-1000,-2000};
  std::random_shuffle( v1.begin(), v1.end(),myrandom);
  for (auto &x : v1) { a.push(x); }
  std::random_shuffle( v1.begin(), v1.end(),myrandom);
  for (auto &x : v1) { b.push(x); }
  return ( ((a == b) == false)  && ((b == a) == false));
}

bool test8() {
  CP::priority_queue<int,Comparator> a(c1);
  CP::priority_queue<int,Comparator> b(c1);
  return ( ((a == b) == true)  && ((b == a) == true));
}

int main() {
  std::srand ( unsigned ( std::time(0) ) );
  int i;
  std::cin >> i;
  switch(i) {
    case 1: std::cout << (test1() ? "OK alks2oi3kdjv" : "WRONG" ) << std::endl; break;
    case 2: std::cout << (test2() ? "OK alksd2oi3kjv" : "WRONG" ) << std::endl; break;
    case 3: std::cout << (test3() ? "OK alksd2oi3kjv" : "WRONG" ) << std::endl; break;
    case 4: std::cout << (test4() ? "OK alks2oi3kdjv" : "WRONG" ) << std::endl; break;
    case 5: std::cout << (test5() ? "OK alksd2oi3kjv" : "WRONG" ) << std::endl; break;
    case 6: std::cout << (test6() ? "OK alksd2oi3kjv" : "WRONG" ) << std::endl; break;
    case 7: std::cout << (test7() ? "OK alksdjaskdjv" : "WRONG" ) << std::endl; break;
    case 8: std::cout << (test8() ? "OK al2oi3kksdjv" : "WRONG" ) << std::endl; break;
  }
}

