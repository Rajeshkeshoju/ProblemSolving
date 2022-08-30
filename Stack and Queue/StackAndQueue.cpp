#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Queue {
    int f;
    int r;
    
    vector<T> queue;
    
    public:
        Queue() {
            f = -1;
            r = -1;
        }
        
        void enqueue(T data) {
            if(empty()) {
                f = 0;
            }
            
            r++;
            queue.emplace_back(data);
        }
        
        int dequeue() {
            if(empty()) {
                return -1;
            }
            
            queue.erase(queue.begin());
            return 0;
        }
        
        int front() {
            return queue[f];
        }
        
        int rear() {
            return queue[r];
        }
        
        bool empty() {
            return queue.size() == 0;
        }
        
        int size () {
            return queue.size();
        }
};

template <class T>
class Stack {
    int t;
    vector<T> stack;
    
    public:
        
        Stack() {
            t = -1;
        }
        
        void push(T data) {
            t++;
            stack.emplace_back(data);
        }
        
        void pop() {
            stack.erase(stack.begin() + t);
            t--;
        }
        
        T top() {
            return stack[t];
        }
        
        bool empty() {
            return stack.size() == 0;
        }
        
        int size() {
            return stack.size();
        }
};



void stackToQueuePush(Stack<int>& stack1, int data) {
    Stack<int> stack2;
    
    while(!stack1.empty()) {
        stack2.push(stack1.top());
        stack1.pop();
    }
    
    stack1.push(data);
    
    while(!stack2.empty()) {
        stack1.push(stack2.top());
        stack2.pop();
    }
}



int stackToQueuePop(Stack<int>& stack) {
    int data = stack.top();
    stack.pop();
    
    return data;
}



void queueUsingStack() {
    Stack<int> stack;
    
    stackToQueuePush(stack, 10);
    stackToQueuePush(stack, 20);
    stackToQueuePush(stack, 30);
    stackToQueuePush(stack, 40);
    
    cout << stackToQueuePop(stack);
    cout << endl;
}



void queueToStackPush(Queue<int>& queue, int data) {
    int s = queue.size();
    queue.enqueue(data);
    
    while(s--) {
        queue.enqueue(queue.front());
        queue.dequeue();
    }
}

int queueToStackPop(Queue<int>& queue) {
    int data = queue.front();
    queue.dequeue();
    
    return data;
}

void stackUsingQueue() {
    Queue<int> queue;
    
    queueToStackPush(queue, 10);
    queueToStackPush(queue, 20);
    queueToStackPush(queue, 30);
    
    cout << queueToStackPop(queue);
    cout << endl;
}

bool isValidParanthesis(string str) {
    Stack<char> stack;
    
    for(auto it: str) {
        if(it == ')' and stack.top() == '(') {
            stack.pop();
        } else if(it == '}' and stack.top() == '{') {
            stack.pop();
        } else if(it == ']' and stack.top() == '[') {
            stack.pop();
        } else {
            stack.push(it);
        }
    }
    
    return stack.empty();
}

int main() {
    queueUsingStack();
    stackUsingQueue();
    
    string str = "(({[]}))";
    cout << isValidParanthesis(str);
    return 0;
}
