#include "solution.h"
#include <queue>

void Solution::HeapSort(std::vector<int> &input) { 
  if (input.size() == 0)
    return;

  std::priority_queue <int, std::vector<int>, std::greater<int>> inputqueue;
  for (auto &n : input) {
    inputqueue.push(n);
  }

  input.clear();
  while (!(inputqueue.empty())) {
    input.push_back(inputqueue.top());
    inputqueue.pop();
  }
}

