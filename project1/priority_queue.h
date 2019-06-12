#include <queue>

class PrioriyQueue {
  public:
    templatePriorityQueue();
    ~templatePriorityQueue();
    bool empty() const;
    const T& top() const;
    int size_();
    void push(const T&);
    void pop();	
  private:
    std::priority_queue<T> storage;
};
