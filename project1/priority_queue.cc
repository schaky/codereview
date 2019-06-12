#include "priority_queue.h"

PriorityQueue<int>::PriorityQueue() {
}

PriorityQueue<int>::~PriorityQueue() {
}

bool PriorityQueue<int>::empty() const {
  return storage.empty();
}

int PriorityQueue<int>::size() {
  return storage.size();
}

const int& PriorityQueue<int>::top() const {
  return storage.top();
}

void PriorityQueue<int>::pop() {
  storage.pop();
}

void PriorityQueue<int>::push(const int& val) {
  storage.push(val);
}
