#include<iostream>
#include<list>
using namespace std;

class Queue{
    list<int> ll;

public:

    void push(int x){
        ll.push_back(x);
    }

    void pop(){
        if(ll.empty()){
            cout << " queue is empty";
            return;
        }

        ll.pop_front();
    }

    int front(){
        if(ll.empty()){
            cout << "queue is empty";
            return -1;
        }

        return ll.front();
    }

    bool empty(){
        return ll.empty();
    }
};

int main(){

    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;



    ///cout << q.front() << endl;

    //q.pop();

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}