#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        while(st1.size()>1)
        {
            st2.push(st1.top());
            st1.pop();
        }
       int val= st1.top();
       st1.pop();
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return val;
    }
    
    int peek() {
         while(st1.size()>1)
        {
            st2.push(st1.top());
            st1.pop();
        }
       int val= st1.top();
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return val;
    }
    
    bool empty() {
        return st1.empty();
    }
};

int main() {
    MyQueue queue;

    // Push elements into the queue
    queue.push(1);
    queue.push(2);
    queue.push(3);

    // Perform operations and print results
    cout << queue.pop() << endl; // Should print 1
    cout << queue.peek() << endl; // Should print 2
    cout << queue.pop() << endl; // Should print 2
    cout << (queue.empty() ? "Yes" : "No") << endl; // Should print No
    cout << queue.pop() << endl; // Should print 3
    cout << (queue.empty() ? "Yes" : "No") << endl; // Should print Yes

    return 0;
}