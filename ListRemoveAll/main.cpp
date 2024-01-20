#include <stdexcept>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "student.h"

int main() {
  std::ios_base::sync_with_stdio(false);std::cin.tie(0);
  CP::list<int> l;
  int n,k,check;
  std::cin >> n >> k >> check;
  while (n--) {
    int x;
    std::cin >> x;
    l.push_back(x);
  }
  l.check(check);
  l.remove_all(k);
  l.check(0);
  l.print();
}

