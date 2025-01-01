#include<bits/stdc++.h>
using namespace std;

class MyStack{
public:
    queue<int> que1;
    queue<int> que2;

    void push(int x){
        que2.push(x);

        while(!que1.empty()){
            que2.push(que1.front());
            que1.pop();
        }
        swap(que1, que2);
    }

    void pop(){
        que1.pop();
    }
    int front(){
        return que1.front();
    }
    bool empty(){
        return que1.empty();
    }

};

int main(){
    MyStack stack;
    stack.push(20);
    stack.push(30);
    stack.push(40);
    cout<<"top element of the stack: "<<stack.front()<<endl;
    stack.pop();
    cout<<"top element of the stack after poping: "<<stack.front()<<endl;
    cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << endl;

}