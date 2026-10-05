#include<iostream>
#include<list>
using namespace std;

class Stack{
    list<int> ll;

public:

    void push(int x){
        ll.push_front(x);
    }

    void pop(){
        if(ll.empty()){
            cout << "Stack is empty";
            return;
        }

        ll.pop_front();
    }

    int top(){
        if(ll.empty()){
            cout << "Stack is empty";
            return -1;
        }

        return ll.front();
    }

    bool empty(){
        return ll.empty();
    }
};

int main(){

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl;

    s.pop();

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}